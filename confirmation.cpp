#include "confirmation.h"
#include "ui_confirmation.h"

/**
 * @brief confirmation::confirmation
 * @brief Constructeur de base de la classe confirmation.
 * @param parent
 * @brief Pas de parent(Aucun héritage)
 */
confirmation::confirmation(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::confirmation)
{
    ui->setupUi(this);
}

/**
 * @fn confirmation::~confirmation
 * @brief Destruction de tout les pointeurs utilisés dans cette classe.
 */
confirmation::~confirmation()
{
    delete ui;
    delete baseDacylo;
}

/**
 * @fn confirmation::setCouleur
 * @brief Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * @brief Paramètre récupéré et transmis.
 */
void confirmation::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

/**
 * @fn confirmation::on_btAnnuler_clicked
 * @brief Utilisation d'un bouton pour se diriger vers le tableau des scores.
 * Ce bouton sers à annuler l'action de suppression des scores. Aucun lien avec la BDD n'est effectué.
 * On crée un pointeur vers le tableau des scores.
 * On ferme la fenêtre existante et on ouvre celle des scores.
 */
void confirmation::on_btAnnuler_clicked()
{
    //Création d'une fenêtre vers le tableau des scores
    scoreboard *tabScore = new scoreboard();

    //Gestion de la couleur
    tabScore->setStyleSheet(couleur);
    tabScore->setCouleur(couleur);

    //Ouverture de la fenêtre des scores
    tabScore->show();

    //Fermture de la fenêtre de confirmation
    this->close();
}

/**
 * @fn confirmation::on_btOk_clicked
 * @brief Ce bouton supprime les scores. Un lien avec la BDD est effectué et on appelle la fonction specifique de suppression.
 * On ferme la connction avec la base ed données.
 * On crée un pointeur vers l'accueil.
 * On ferme la fenêtre existante et on ouvre celle de l'accueil.
 */
void confirmation::on_btOk_clicked()
{
    //Création d'un lien vers la BDD
    BDD *baseDactylo = new BDD();
    //Création d'une connexion
    baseDactylo->connexion();
    //Vérification de la BDD
    baseDactylo->createBDD();
    //Effacement des scores
    baseDactylo->deleteScore();

    //Création d'une fenêtre vers l'accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre d'accueil
    accueil->show();

    //Fermture de la fenêtre de confirmation
    this->close();
}

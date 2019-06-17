#include "name.h"
#include "ui_name.h"

/**
 * @brief Name::Name
 * @brief Constructeur de base de la classe Name
 * @param parent
 * @brief Aucun parent (Pas d'héritage)
 */
Name::Name(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Name)
{
    ui->setupUi(this);
    ui->lNom->setFocus();
}

/**
 * @fn Name::~Name
 * @brief Destruction du pointeur de l'interface
 */
Name::~Name()
{
    delete ui;
}

/**
 * @fn Name::on_btStart_clicked
 * @brief Bouton de Start.
 * On crée le pointeur de Jeu.
 * On ouvre la fenêtre de Jeu.
 * On ferme la fenêtre existante de Name.
 */
void Name::on_btStart_clicked()
{
    //Création de la fenètre de jeu
    //Récupération du nom de l'utilisateur pour transfert vers la fenetre de jeu en passant par le constructeur avec paramètre
    game * monJeu = new game(ui->lNom->text());

    //Gestion de la couleur
    monJeu->setStyleSheet(couleur);
    monJeu->setCouleur(couleur);

    //Fermeture de la fenête de nom
    this->close();

    //Ouverture de la fenêtre de jeu
    monJeu->show();
    monJeu->creationTableau();
   // monJeu->jouer();
}

/**
 * @fn Name::setCouleur
 * Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * Paramètre récupéré et transmis.
 */
void Name::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

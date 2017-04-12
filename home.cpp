#include "home.h"
#include "ui_home.h"

/**
 * @brief home::home
 * @brief Constructeur de base de la classe Accueil.
 * @param parent
 * @brief Aucun parent (pas d'héritage)
 */
home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
    ui->btPlay->setFocus();
}

/**
 * @fn home::~home
 * @brief Destruction de tout les pointeurs utilisées dans la fenêtre Accueil.
 */
home::~home()
{
    delete ui;
}

/**
 * @fn home::on_btPlay_clicked
 * @brief Bouton de lancement d'un jeu.
 * On redirige vers l'UI Name. On crée le pointeur en conséquence.
 * On ouvre la fenêtre de nom.
 * On ferme la fenêtre existante d'accueil.
 */
void home::on_btPlay_clicked()
{
    //Création du pointeur Vers la fenêtre qui demande le nom du joueur
    Name *nom = new Name();

    //Gestion de la couleur
    nom->setStyleSheet(couleur);
    nom->setCouleur(couleur);

    //Ouverture de la fenetre Nom
    nom->show();

    //Fermeture la fenêtre Accueil
    this->close();
}

/**
 * @fn home::on_btExit_clicked
 * @brief Bouton de fermeture de l'application.
 * Fermeture de la fenêtre existante.
 */
void home::on_btExit_clicked()
{
    //Fermeture du programme
    this->close();
}

/**
 * @fn home::on_btScoreboard_clicked
 * @brief Bouton de redirection vers le tableau des scores.
 * On crée le pointeur associé. On ouvre la fenêtre des scores.
 * On ferme la fenêtre existante d'accueil.
 */
void home::on_btScoreboard_clicked()
{
    //Création d'une fenêtre vers le tableau des scores
    scoreboard *tabScore = new scoreboard();

    //Gestion de la couleur
    tabScore->setStyleSheet(couleur);
    tabScore->setCouleur(couleur);

    //Ouverture de la fenêtre des scores
    tabScore->show();

    //Fermture de la fenêtre d'accueil
    this->close();
}

/**
 * @fn home::setCouleur
 * @brief Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * @brief Paramètre récupéré et transmis.
 */
void home::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

/**
 * @fn home::on_comboBox_currentIndexChanged
 * @brief Fonction de contrôle de la coueur.
 * Chaque couleur représente un index différent.
 * En fonction du choix utilisateur (la valeur de l'index change)
 * On renvoi dans la feuille de style de l'accueil, la couleur qui correspond.
 * @param index
 * @brief Variable qui détermine la correspondance avec la couleur
 */
void home::on_comboBox_currentIndexChanged(int index)
{
    switch (index)
    {
    case 0:
        couleur = "background-color:#B0E0E6";
        this->setStyleSheet(couleur);
        this->setCouleur(couleur);
    break;
    case 1:
        couleur = "background-color:#B0F2B6";
        this->setStyleSheet(couleur);
        this->setCouleur(couleur);
    break;
    case 2:
        couleur = "background-color:#FFFACD";
        this->setStyleSheet(couleur);
        this->setCouleur(couleur);
    break;
    case 3:
        couleur = "background-color:#FF7F50";
        this->setStyleSheet(couleur);
        this->setCouleur(couleur);
    break;
    default:
        couleur = "background-color:#B0E0E6";
        this->setStyleSheet(couleur);
        this->setCouleur(couleur);
        break;
    }
}

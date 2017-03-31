#include "home.h"
#include "ui_home.h"
#include "name.h"
#include "scoreboard.h"

home::home(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::home)
{
    ui->setupUi(this);
}

home::~home()
{
    delete ui;
}

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

void home::on_btExit_clicked()
{
    //Fermeture du programme
    this->close();
}

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

void home::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

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

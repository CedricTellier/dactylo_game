#include "scoreboard.h"
#include "ui_scoreboard.h"
#include "home.h"

scoreboard::scoreboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scoreboard)
{
    ui->setupUi(this);
}

scoreboard::~scoreboard()
{
    delete ui;
}

void scoreboard::on_btDelete_clicked()
{
    //Efface l'intégralisté des scores dans la BDD
    //TO DO
}

void scoreboard::on_btBack_clicked()
{
    // Création d'une fenêtre vers l'accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre
    accueil->show();

    //Fermeture de la fenêtre des Scores
    this->close();
}
void scoreboard::setCouleur(QString couleur)
{
    this->couleur = couleur;
}


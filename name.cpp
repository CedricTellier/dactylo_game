#include "name.h"
#include "ui_name.h"
#include "game.h"
#include "home.h"

Name::Name(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Name)
{
    ui->setupUi(this);
}

Name::~Name()
{
    delete ui;
}

void Name::on_btStart_clicked()
{
    //Création de la fenètre de jeu
    //Récupération du nom de l'utilisateur pour transfert vers la fenetre de jeu en passant par le constructeur avec paramètre
    game * monJeu = new game(ui->lNom->text());

    //Gestion de la couleur
    monJeu->setStyleSheet(couleur);
    monJeu->setCouleur(couleur);

    //Ouverture de la fenêtre de jeu
    monJeu->show();

    //Fermeture de la fenête de nom
    this->close();
}

void Name::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

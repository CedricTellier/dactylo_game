#include "end.h"
#include "ui_end.h"
#include "home.h"
#include "game.h"

/*
 * Constructeur de bas non utilisé
end::end(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::end)
{
    ui->setupUi(this);
}
*/

//Constructeur avec mon paramètre du nom du joueur//
end::end(QString nomJoueur, QString score):
    ui(new Ui::end)
{
    ui->setupUi(this);
    ui->lbRNomJoueur->setText(nomJoueur);
    ui->lbRNbScore->setText(score);
 }

end::~end()
{
    delete ui;
}

void end::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

void end::on_btQuit_clicked()
{
    //Création de la fenêtre Accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre d'accueil
    accueil->show();

    //Fermeture de la fenête de fin de partie
    this->close();
}

void end::on_btRestart_clicked()
{
    //Création de la fenêtre de jeu
    game *monJeu = new game(ui->lbRNomJoueur->text());

    //Gestion de la couleur
    monJeu->setStyleSheet(couleur);
    monJeu->setCouleur(couleur);

    //Ouverture de la fenêtre de jeu
    monJeu->show();

    //Fermeture de la fenête de fin de jeu
    this->close();
}

#include "game.h"
#include "ui_game.h"
#include "end.h"


/*
 * Constructeur de bas non utilisé
 * game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #87CEFA");
}*/

//Constructeur avec mon paramètre du nom du joueur//
game::game(QString nomJoueur):
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->lbNomJoueur->setText(nomJoueur);
    ui->lbNbScore->setText("0");
    ui->lbNbJoker->setText("3");

    //Création d'une playlist avec une chanson
    playlist = new QMediaPlaylist();
    playlist->addMedia(QUrl::fromLocalFile("C:\\Users\\Cédric\\Desktop\\Projet 3\\Music\\Tetris.mp3"));
    //La playlist tourne à l'infini
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    //Création d'un mediaPlayer avec la playlist comme argument
    music = new QMediaPlayer();
    music->setMedia(playlist);
    //Gestion du volume
    music->setVolume(25);
    music->play();
}
game::~game()
{
    delete ui;
}

void game::on_btSound_clicked()
{
    if (music->volume()==25)
    {
        //Si la music est on, on turn off le volume
        music->setVolume(0);
        ui->btSound->setStyleSheet("background-color:red");
    }
    else
    {
      //Sinon le volume est à 0 donc on remt le son (Comme Philippe)
      music->setVolume(25);
      ui->btSound->setStyleSheet("background-color:green");
    }
}

void game::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

void game::finDePartie()
{
    //Création du pointeur Vers la fenêtre de fin de partie
    end * finDePartie = new end(ui->lbNomJoueur->text(), ui->lbNbScore->text());

    //Gestion de la couleur
    finDePartie->setStyleSheet(couleur);
    finDePartie->setCouleur(couleur);

    //Ouverture de la fenetre de fin de partie
    finDePartie->show();

    //Fermeture la fenêtre de jeu
    this->close();

}
void game::rejouer()
{
    //To Do
}

void game::on_btTest_clicked()
{
    //Création du pointeur Vers la fenêtre de fin de partie
    end * finDePartie = new end(ui->lbNomJoueur->text(), ui->lbNbScore->text());

    //Gestion de la couleur
    finDePartie->setStyleSheet(couleur);
    finDePartie->setCouleur(couleur);

    //Ouverture de la fenetre de fin de partie
    finDePartie->show();

    //Fermeture la fenêtre de jeu
    this->close();
}

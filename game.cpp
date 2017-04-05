#include "game.h"
#include "ui_game.h"
#include <iostream>

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
    playlist->addMedia(QUrl("Tetris.mp3"));
    //La playlist tourne à l'infini
    playlist->setPlaybackMode(QMediaPlaylist::Loop);

    //Création d'un mediaPlayer avec la playlist comme argument
    music = new QMediaPlayer();
    music->setMedia(playlist);
    //Gestion du volume
    music->setVolume(25);
    music->play();

    //On met le focus surla barre de frappe
    ui->leTaper->setFocus();
}

game::~game()
{
    delete ui;
    delete music;
    delete playlist;
    delete time;
}

void game::creationTableau()
{
    BDD baseDactylo;
    //Création d'un lien à la base de donnée
    baseDactylo.connexion();
    //Verification de l'accès à la BDD
    baseDactylo.createBDD();
    //Création de la liste de 60 mots
    baseDactylo.selectMot();
    //Deconnection
    baseDactylo.deconnexion();

    //Insertion des mots dans la tableau du jeu
    for(int i = 0; i <60; i++)
    {
        this->tabMots[i] = baseDactylo.tabWords[i];
        /*Test en sortie
        std::cout<< this->tabMots[i].toStdString() << std::endl;
        */
    }
}

void game::jouer()
{
    //Variables utiles
    int temps = 30000;
    int nbMots =0;
    int Joker = ui->lbNbJoker->text().toInt();

    while ((nbMots <60)&&(Joker>0))
        {
            //On insère le premier mot dans le label
            ui->lbMots->setText(this->tabMots[nbMots]);
            //On l'insere dans le mot de l'ordi
            this->setMotOrdi(this->tabMots[nbMots]);

            //Variable de vérification
            bool valider = false;

            //Instanciation du timer de temps pour répondre
            time = new QTimer();
            time->setInterval(temps);
            time->start();

            //Tant que le temps tourne
            while(time->isActive())
            {
                //Permet de laisser l'utilisateur frapper
                QApplication::processEvents();
                //Si le mot est trouvé
                if(this->getMotOrdi().compare(ui->leTaper->text())==0)
                {
                    //Test en sortie
                    //std::cout << "ca fonctionne " << std::endl;
                    //std::cout << temps << std::endl;
                    //On incrémente les résultats
                    int score = ui->lbNbScore->text().toInt();
                    //On test pour savoir si on utilise la fonction Combo pour multiplier les points
                    if((Joker>2)||(nbMots>29))
                    {
                        score+=this->combo();
                    }
                    else
                    {
                        //Sinon points normaux
                        score+=this->pointsField();
                    }

                    //On transmets les points
                    QString nbPoints = QString::number(score);
                    ui->lbNbScore->setText(nbPoints);
                    ui->leTaper->setText("");
                    //On stoppe le temps
                    time->stop();
                    //Variable de test modifiee
                    valider = true;
                }
                //Si le temps touche à sa fin
                if (time->remainingTime()<=0)
                {
                   std::cout << "timeout" << std::endl;
                   ui->leTaper->setText("");
                   time->stop();
                }
            }
            //Test en sortie
            std::cout << valider << std::endl;

            //Si mot non valide
            if (!valider)
            {
                //On retire un joker
                Joker-=1;
                QString nbJoker = QString::number(Joker);
                ui->lbNbJoker->setText(nbJoker);
            }
            //On fait tourner la boucle
            nbMots++;
            //On décrémente le temps pour acceler la frappe
            temps-=500;
        }

        //To Do
        //Envoyer les infos vers la base de donnée à la fin de partie
        //this->BDDFindePartie();

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

void game::BDDFindePartie()
{
    BDD baseDactylo;
    //Création d'un lien à la base de donnée
    baseDactylo.connexion();
    //Verification de l'accès à la BDD
    baseDactylo.createBDD();
    //Insertion des infos du joueur dans la BDD
    //baseDactylo.insertJoueur();
    //Deconnection
    baseDactylo.deconnexion();
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

void game::setMotOrdi(QString motOrdi)
{
    this->motOrdi = motOrdi;
}

QString game::getMotOrdi()
{
    return motOrdi;
}

void game::setMotSaisie(QString motSaisie)
{
    this->motSaisie = motSaisie;
}

QString game::getMotSaisie()
{
    return motSaisie;
}

int game::pointsField()
{
    int nbPoints=0;
    switch(this->getMotOrdi().length())
    {
    case 1:
    case 2:
    case 3:
    case 4:
        nbPoints = 25;
        return nbPoints;
        break;
    case 5:
    case 6:
    case 7:
    case 8:
        nbPoints = 50;
        return nbPoints;
        break;
    case 9:
    case 10:
    case 11:
    case 12:
        nbPoints = 125;
        return nbPoints;
        break;
    case 13:
    case 14:
    case 15:
    case 16:
        nbPoints = 200;
        return nbPoints;
        break;
    case 17:
    case 18:
    case 19:
    case 20:
        nbPoints = 325;
        return nbPoints;
        break;
    default:
        nbPoints = 25;
        return nbPoints;
        break;
    }
}
int game::combo()
{
    int nbPoints = 0;
    switch(this->pointsField())
    {
    case 25:
        nbPoints = 25 + 10;
        return nbPoints;
    case 50:
        nbPoints = 50 * 1.50;
        return nbPoints;
        break;
    case 125:
        nbPoints = 125 * 2;
        return nbPoints;
        break;
    case 200:
        nbPoints = 200 * 2.50;
        return nbPoints;
        break;
    case 325:
        nbPoints = 325 * 3;
        return nbPoints;
        break;
    default:
        nbPoints = 25 + 10;
        return nbPoints;
        break;
    }
}


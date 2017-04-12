#include "game.h"
#include "ui_game.h"
#include <iostream>

/**
 * @brief game::game
 * @brief Constructeur de base de la classe Game.
 * Inutile dans notre cas, un constructeur avec paramètre est utilisé à chaque fois.
 * @param parent
 * @brief Aucun parent (pas d'héritage)
 */
game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: #87CEFA");
}


/**
 * @brief game::game
 * @brief Constructeur paramétré de la classe Game.
 * Instanciation d'une playlist, d'un playerMedia pour la music de fond
 * Instanciation d'un joueur pour la récupération des données spécifique au joueur.
 * @param nomJoueur
 * @brief Variable texte du nom du joueur
 */
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

    //On instancie le joueur
    player = new joueur();

    //Variable de temps
    temps = 60000;
}

/**
 * @fn game::~game
 * @brief Destruction de tout les pointeurs utilisées dans la fenêtre Game
 */
game::~game()
{
    //On oublie pas de détruire ses pointeurs
    delete ui;
    delete music;
    delete playlist;
    delete time;
    delete player;
    delete baseDactylo;
    delete chrono;
}

/**
 * @fn game::creationTableau
 * @brief Creation d'un lien vers la base de données
 * Appelle de la fonction de création d'un sélection de mots
 * Insertion des mots du tableau dans un tableau propre au jeu.
 */
void game::creationTableau()
{
    BDD *baseDactylo = new BDD();
    //Création d'un lien à la base de donnée
    baseDactylo->connexion();
    //Verification de l'accès à la BDD
    baseDactylo->createBDD();
    //Création de la liste de 60 mots
    baseDactylo->selectMot();

    //Insertion des mots dans la tableau du jeu
    for(int i = 0; i <60; i++)
    {
        this->tabMots[i] = baseDactylo->tabWords[i];
        /*Test en sortie
        std::cout<< this->tabMots[i].toStdString() << std::endl;
        */
    }
}

/**
 * @fn game::jouer
 * @brief fonction de jeu de chaque partie
 * Pour chaque mot, on lance un timer d'un durée initiale de 60 secondes.
 * Durant ce temps, le joueur tape ce qu'il souhaite.
 * Si le mot est correct, on incrémente son score grâce à la fonction pointsFields.
 * Si non, un joker lui est retiré.
 * Un second timer est lancé au même moment que le premier et contrôle la progressBar (effet visuel pour l'utilisateur)
 * On lance un nouveau mot.
 * Le joueur dispose de 3 joker.
 * A haque mot, le temps disponible se décrémente et doit faire accéler la frappe de l'utilisateur.
 */
void game::jouer()
{
    //Variables utiles
    int nbMots =0;
    int Joker = ui->lbNbJoker->text().toInt();

    //On transmet le nom du joueur au pointeur
    player->setNomJoueur(ui->lbNomJoueur->text());

    while ((nbMots <60)&&(Joker>0))
        {
            ui->PBtime->setMaximum(temps/1000);
            ui->PBtime->setValue(temps/1000);

            //On insère le premier mot dans le label
            ui->lbMots->setText(this->tabMots[nbMots]);
            //On l'insere dans le mot de l'ordi
            this->setMotOrdi(this->tabMots[nbMots]);

            //Variable de vérification
            bool valider = false;

            //Instanciation du timer de temps pour répondre
            time = new QTimer(this);
            time->setInterval(temps);
            time->start();

            //Création du timer qui gère la progressBar
            chrono = new QTimer();
            chrono->setInterval(1000);
            //Connect envoyant le slot correspondant à chaque timeout
            connect(chrono, SIGNAL(timeout()), this, SLOT(miseAJour()));
            chrono->start();

            //Tant que le temps tourne
            while(time->isActive())
            {
                //Permet de laisser l'utilisateur frapper
                QApplication::processEvents();
                //Si le mot est trouvé
                if(this->getMotOrdi().compare(ui->leTaper->text())==0)
                {
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

                    //On transmets les points chez le joueur
                    player->setScoreJoueur(score);

                    //On les transmets aussi à l'interface
                    QString nbPoints = QString::number(score);
                    ui->lbNbScore->setText(nbPoints);
                    ui->leTaper->setText("");
                    //On stoppe le temps
                    time->stop();
                    //Variable de test modifiee
                    valider = true;
                }
                //Si le temps touche à sa fin
                if (ui->PBtime->value()<=0)
                {
                   ui->leTaper->setText("");
                   time->stop();
                }
            }

            //Si mot non valide
            if (!valider)
            {
                //On retire un joker
                Joker-=1;
                QString nbJoker = QString::number(Joker);
                ui->lbNbJoker->setText(nbJoker);
            }
            //On stoppe le timer de la progressBar
            chrono->stop();
            //On fait tourner la boucle
            nbMots++;
            //On décrémente le temps pour acceler la frappe
            temps -= 1000;
        }

        //Insertion des résultats du joueur en BDD
        baseDactylo->insertJoueur(player->getNomJoueur(), player->getScoreJoueur());

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

/**
 * @fn game::on_btSound_clicked
 * @brief Bouton de contrôle du son
 * On test si le son est allumé. Si oui, le son est mute.
 * Sinon il est rallumé.
 * Un background différent apparait si le son est allumé ou mute.
 */
void game::on_btSound_clicked()
{
    if (music->volume()==25)
    {
        //Si la music est on, on turn off le volume
        music->setVolume(0);
        ui->btSound->setStyleSheet("background-color:#E9383F; border-radius:10px;");
    }
    else
    {
      //Sinon le volume est à 0 donc on remt le son (Comme Philippe)
      music->setVolume(25);
      ui->btSound->setStyleSheet("background-color:#54F98D; border-radius:10px;");
    }
}

/**
 * @fn game::setCouleur
 * @brief Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * @brief Paramètre récupéré et transmis.
 */
void game::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

/**
 * @fn game::setMotOrdi
 * @brief Récupère le mot sélectionné par l'ordi afin de l'insérer dans la variable privé motOrdi.
 * @param motOrdi
 * @brief Paramètre récupéré et transmis.
 */
void game::setMotOrdi(QString motOrdi)
{
    this->motOrdi = motOrdi;
}

/**
 * @fn game::getMotOrdi
 * @return la variable motOrdi
 */
QString game::getMotOrdi()
{
    return motOrdi;
}

/**
 * @fn game::setMotSaisie
 * @brief Récupère le mot tapé par le joueur afin de l'insérer dans la variable privé motSaisie.
 * @param motSaisie
 * @brief Paramètre récupéré et transmis.
 */
void game::setMotSaisie(QString motSaisie)
{
    this->motSaisie = motSaisie;
}

/**
 * @fn game::getMotSaisie
 * @return la variable motSaisie.
 */
QString game::getMotSaisie()
{
    return motSaisie;
}

/**
 * @fn game::pointsField
 * @brief Fonction de calculs des points. On calcule pour chaque mot son nombre de lettre.
 * En fonction de cela un nombre de point est attribué et transmis au score du joueur.
 * @return la variable nbPoints.
 */
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

/**
 * @fn game::combo
 * @brief Fonction de calcul spéciale des points.
 * Si au bout de 30 mots écrits, l'utilisateur a toujours trois jokers, le nombre de points retournés n'est plus le même.
 * @return nbPoints
 */
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

/**
 * @fn game::miseAJour
 * @brief Fonction de mise à jouer de la progressBar.
 * Toute les Timeout du timer chrono, cette fonction est appelé et décrémente la valeur du l'UI progressBar.
 */
void game::miseAJour()
{
    //Dans une variable, on retourne la valeur actuelle de la progressBar à laquelle on retire 1(pour 1 seconde)
    int val = ui->PBtime->value()-1;
    //On retourne cette nouvelle valeur à la progressBar
    ui->PBtime->setValue(val);
}

/**
 * @fn game::on_btSortie_clicked
 * @brief Bouton de Sortie du jeu.
 * On crée le pointeur d'accueil.
 * On ouvre la fenêtre d'accueil.
 * On ferme la fenêtre existante de jeu.
 */
void game::on_btSortie_clicked()
{
    //Création de la fenêtre Accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre d'accueil
    accueil->show();

    //Fermeture de la fenête de game
    this->close();
}

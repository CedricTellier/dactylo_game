#include "home.h"
#include <QApplication>


/**
 * @file qMain
 * @brief Application de dactylographie
 * @author Cédric Tellier
 * @version 1.0
 * @date 11 avril 2017
 */

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home Accueil;

    /**
      \mainpage
        Bonjour et bienvenue dans ce programme de datylographie.

      \subsection
        Un petit jeu simple de dactylographie.\n
        60 mots et de moins en moins de temps pour les taper.\n
        3 jokers disponibles.\n
        Que le meilleur gagne.

        Cette documentatition a pour but d'apporter le détail de l'implémentation du code.\n
        Elle nécessite d'être correctement lue afin de pouvori maintenir l'applciation durablement.
     */


    //Gestion de la couleur
    Accueil.setStyleSheet("background-color:#B0E0E6");
    Accueil.setCouleur("background-color:#B0E0E6");

    //Ouverture de la page d'accueil
    Accueil.show();

    return a.exec();

    //----------------------------------------//
    //----Session de test des requetes SQL----//
    //----------------------------------------//

    //1.Création ou vérification de la base de données//
    /*BDD baseDactylo;
     * baseDactylo.createBDD();
     * requête done
     */

    //-----2.Insertion en base de données-----//
    //Cas du joueur inconnu
    /*
     * baseDactylo.insertJoueur("Camille", 12);
     * baseDactylo.insertJoueur("Damien", 4000);
     * baseDactylo.insertJoueur("Thomas", 120);
     * baseDactylo.deconnexion();
     * requête done
     */

    //Cas du joueur connu avec nouveau score inférieur ou égal
    /*
     * baseDactylo.insertJoueur("Camille", 0);
     * baseDactylo.insertJoueur("Damien", 4000);
     * baseDactylo.insertJoueur("Thomas", 100);
     * requête done
     */

    //Cas du joueur connu avec nouveau score supérieur
    /*
     * baseDactylo.insertJoueur("Camille", 1000);
     * baseDactylo.insertJoueur("Damien", 7000);
     * baseDactylo.insertJoueur("Thomas", 725);
     * requête done
     */

    //----3.Delete score en base de données----//
    /*
     * baseDactylo.deleteScore();
     * requête done
     */

    //------4.Selection de 60 mots en BDD------//
    /*
     * baseDactylo.selectMot();
     * requête done
     */

    //----------------------------------------//
    //-----Fin des test des requêtes SQL------//
    //----------------------------------------//
}

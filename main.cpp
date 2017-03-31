#include "home.h"
#include <QApplication>
#include "bdd.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    home Accueil;

    //Création ou vérification de la base de donnée
    BDD baseDactylo;
    baseDactylo.createBDD();

    //----------------------------------------//
    //----Session de test des requetes SQL----//
    //----------------------------------------//

    //-----1.Insertion en base de données-----//
    //Cas du joueur inconnu
    /*
     * baseDactylo.insertJoueur("Camille", 12);
     * baseDactylo.insertJoueur("Damien", 4000);
     * baseDactylo.insertJoueur("Thomas", 120);
     * requête done
     //*/

    //Cas du joueur connu avec nouveau score inférieur ou égal
    /*
     * baseDactylo.insertJoueur("Camille", 0);
     * baseDactylo.insertJoueur("Damien", 4000);
     * baseDactylo.insertJoueur("Thomas", 100);
     * requête done
     //*/

    //Cas du joueur connu avec nouveau score superieur
    /*
     * baseDactylo.insertJoueur("Camille", 1000);
     * baseDactylo.insertJoueur("Damien", 7000);
     * baseDactylo.insertJoueur("Thomas", 725);
     * requête done
     */

    //----2.Delete score en base de données----//
    /*
    * baseDactylo.deleteScore();
    * requete done
    */

    //------3.Selection de 60 mots en BDD------//
    /*
     * baseDactylo.selectMot();
     * requete done
     */

    //----------------------------------------//
    //-----Fin des test des requetes SQL------//
    //----------------------------------------//


    //Gestion de la couleur
    Accueil.setStyleSheet("background-color:#B0E0E6");
    Accueil.setCouleur("background-color:#B0E0E6");

    Accueil.show();

    return a.exec();
}

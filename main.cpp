#include "home.h"
#include <QApplication>

/**
 * @file qMain
 * @brief Application de dactylographie
 * @author Cédric Tellier
 * @version 1.0
 * @date 11 avril 2017
 */

int main(int argc, char* argv[])
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

  const QString COLOR = "background-color:#B0E0E6";

  //Gestion de la couleur
  Accueil.setStyleSheet(COLOR);
  Accueil.setCouleur(COLOR);

  //Ouverture de la page d'accueil
  Accueil.show();

  return a.exec();
}

#include "joueur.h"

/**
 * @brief joueur::joueur
 * @brief Constructeur de base de la classe.
 */
joueur::joueur()
{
    //Par défaut le joueur n'a pas de points
    scoreJoueur = 0;
}


/**
 * @fn joueur::getNomJoueur
 * @return le nom du joueur
 */
QString joueur::getNomJoueur()
{
    return nomJoueur;
}

/**
 * @fn joueur::setNomJoueur
 * @brief Fonction d'insertion du nom du joueur en fonction d'un paramètre
 * @param nomJoueur
 * @brief Paramètre utilisé
 */
void joueur::setNomJoueur(QString nomJoueur)
{
    this->nomJoueur = nomJoueur;
}

/**
 * @fn joueur::getScoreJoueur
 * @return le score du joueur
 */
int joueur::getScoreJoueur()
{
    return scoreJoueur;
}

/**
 * @fn joueur::setScoreJoueur
 * @brief Fonction d'insertion du score du joueur en fonction d'un paramètre.
 * @param scoreJoueur
 * @brief Paramètre utilisé.
 */
void joueur::setScoreJoueur(int scoreJoueur)
{
    this->scoreJoueur = scoreJoueur;
}

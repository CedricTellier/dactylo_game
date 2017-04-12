#ifndef JOUEUR_H
#define JOUEUR_H

#include <QString>

/**
 * @class joueur class
 * @brief Classe qui gère les informations propres au joueur.
 */
class joueur
{
public:
    joueur();

    /**
     * @fn getNomJoueur
     * @return Variable texte comportant le nom du joueur.
     */
    QString getNomJoueur();

    /**
     * @fn setNomJoueur
     * @brief Insert le nom du joueur.
     * @param nomJoueur
     * @brief Variable privée du nom du joueur.
     */
    void setNomJoueur(QString nomJoueur);

    /**
     * @fn getNomJoueur
     *@return le score actuel du joueur.
     */
    int getScoreJoueur();

    /**
     * @fn setScoreJoueur
     * @brief Insert le score du joueur.
     * @param scoreJoueur
     * @brief Variable privé du score.
     */
    void setScoreJoueur(int scoreJoueur);


private:
    /**
     * @brief nomJoueur
     * Variable privée
     */
    QString nomJoueur;

    /**
     * @brief scoreJoueur
     * Variable privée
     */
    int scoreJoueur;
};

#endif // JOUEUR_H

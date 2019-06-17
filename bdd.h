#ifndef BDD_H
#define BDD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QStringList>
#include <QString>

/**
 * @class BDD class
 * @brief Cette class gère les liens avec la base de données.
 * On y retrouve les informations joueurs (score et nom) ainsi que les mots qui alimentent chaque partie.
 */

class BDD
{

public:
    /**
     *
     * @brief Constructeur de base de la classe.
     */
    BDD();

    /**
     * @fn connexion
     * @brief Permet la connection avec la base de données.
     */
    void connexion();

    /**
     * @fn createBDD
     * @brief Cette fonction crée les différentes tables de la base de données.
     * Afin de ne rien faire en double, un test est réalisé pour éviter de créer des doublons.
     */
    void createBDD();

    /**
     * @fn selectMot
     * @brief Cette fonction sélectionne de manière aléatoire 60 mots.
     * Ces mots seront régénérés pour chaque partie.
     * La base de données contient actuellement plus de 22000 mots.
     */
    void selectMot();

    /**
     * @fn insertJoueur
     * @brief Cette fonction insert les données du joueur ou les met à jour.
     * Utilisation de requetes parametrées pour éviter l'injection SQL.
     * @param nom
     * @brief Nom du joueur en BDD.
     * @param score
     * @brief Score obtenu.
     */
    void insertJoueur(QString nom, int score);

    /**
     * @fn selectBestScore
     * @brief Cette fonction sélectionne les dix meilleurs scores disponibles en base de données.
     */
    void selectBestScore();

    /**
     * @fn deleteScore
     * @brief Effacement des scores en base de données.
     * A noter que les nom sont gardés dans une logique de non-surchage de la base de données.
     */
    void deleteScore();

    /**
     * @brief nomResultat
     * Variable des noms pour le tableau des scores
     */
    QString nomResultat[10];

    /**
     * @brief scoreResultat
     * Variable des scores pour le tableau des scores
     */
    QString scoreResultat[10];

    /**
     * @brief tabWords
     * Variable pour la selection des mots
     */
    QStringList tabWords;

private:
    /**
     * @brief baseDeDonnees
     * Variable privée pour protection de la BDD
     */
    QSqlDatabase baseDeDonnees;

};

#endif // BDD_H

#include "bdd.h"
#include <iostream>

/**
 * @brief BDD::BDD
 * @brief Constructeur de base de la Base de données
 * Contient son nom et le type de base.
 * SQlite est utilisé dans notre cas.
 */
BDD::BDD()
{

    baseDeDonnees = QSqlDatabase::addDatabase("QSQLITE");
    baseDeDonnees.setDatabaseName("baseDeDonnes.db");
}

/**
 * @fn BDD::connexion
 * @brief Test si la connection est ouverte afin d'éviter des conflits de BDD;
 */
void BDD::connexion()
{
    if (baseDeDonnees.open())
    {
       std::cout << "Database opened" << std::endl;
    }
    else
    {
       std::cout << "Error BDD" << std::endl;
    }
}

/**
 * @fn BDD::createBDD
 * @brief Création des tables de notre BDD.
 * Utilisation d'une condition "IF NOT EXISTS" afin de ne pas créer de doublons.
 * Création des tables mot et joueur.
 */
void BDD::createBDD()
{
    //Création de la table de mot
    QSqlQuery CreerTmot;
    CreerTmot.prepare("CREATE TABLE IF NOT EXISTS T_mot (word)");

    if(CreerTmot.exec())
    {
        std::cout << "T_mot Creation done" << std::endl;
    }
    else
    {
        qDebug() << "T_mot Creation Error" << CreerTmot.lastError();
    }

    //Création de la table du joueur
    QSqlQuery CreerTjoueur;
    CreerTjoueur.prepare("CREATE TABLE IF NOT EXISTS T_joueur (name, score)");

    if(CreerTjoueur.exec())
    {
        std::cout << "T_joueur Creation done" << std::endl;
    }
    else
    {
        qDebug() << "T_joueur Creation Error" << CreerTjoueur.lastError();
    }
}

/**
 * @fn BDD::selectMot
 * @brief Cette fonction sélectionne en base de données 60 mots de manière aléatoire.
 * 60 mots afin de mieux gérer le temps utilisateurs. Cette condition est simple à changer.
 * Les mots sont insérerés dans un tableau qui sera transmis dans un autre tableau par la suite.
 */
void BDD::selectMot()
{
    QSqlQuery selectMot;
    selectMot.prepare("SELECT word FROM T_mot ORDER BY random() LIMIT 60");

    if(selectMot.exec())
    {
        while (selectMot.next())
        {
            for (int i = 0; i<60; i++)
            {
                tabWords[i] = selectMot.value(0).toString();
                selectMot.next();
            }
        }
        std::cout << "Words Selection done" << std::endl;
    }
    else
    {
        qDebug() << "Words Selection Error" << selectMot.lastError();
    }
}

/**
 * @fn BDD::insertJoueur
 * @brief Cette fonction récupère le nom du joueur et son score obtenu.
 * 1ere etape : vérification de l'existence du joueur en BDD.
 * Si non, on effectue une insertion du nom et du score en BDD.
 * Si oui, 2ème étape: Vérification du score.
 * Nouveau score plus bas que celui en BDD, on ne fait rien.
 * Nouveau score supérieur, on effectue une mise à jour du score.
 * @param nom
 * @brief Paramètre fournis dans la classe joueur.
 * @param score
 * @brief Paramètre fournis dans la classe joueur.
 */
void BDD::insertJoueur(QString nom, int score)
{
    //Test du nom du joueur en BDD pour ne pas surcharger celle-ci
    QSqlQuery verification;
    verification.prepare("SELECT name, score FROM T_joueur WHERE name = :nom");

    //Gestion des parametres (injection SQL)
    verification.bindValue(":nom", nom);
    verification.bindValue(":score", score);

    if(verification.exec())
    {
        //Si ma requête renvoit rien, le joueur n'existe pas
        if (verification.next() == false)
        {
            //Insertion dans la BDD du nom et du score du joueur apères la partie
            QSqlQuery insertNomScore;
            insertNomScore.prepare("INSERT INTO T_joueur (name, score) VALUES (:nom, :score)");

            //Gestion des parametres (injection SQL)
            insertNomScore.bindValue(":nom", nom);
            insertNomScore.bindValue(":score", score);

            if(insertNomScore.exec())
            {
                std::cout << "Insert player done" << std::endl;
            }
            else
            {
                qDebug() << "Insert Error" << insertNomScore.lastError();
            }
        }
        else
        {
            //Sinon le joueur existe déjà en BDD
            //Testons son score pour vérifier si c'est utile de le mettre à jour
            int result = verification.value(1).toInt();

            if(result < score)
            {
                //Update du score du joueur
                QSqlQuery updateScore;
                updateScore.prepare("UPDATE T_joueur SET score = :score WHERE name = :nom");

                //Gestion des parametres (injection SQL)
                updateScore.bindValue(":score", score);
                updateScore.bindValue(":nom", nom);

                if(updateScore.exec())
                {
                    std::cout << "Update player done" << std::endl;
                }
                else
                {
                    qDebug() << "Update Error" << updateScore.lastError();
                }
            }
            else
            {
                std::cout << "No Update or insert to do!" << std::endl;
            }
        }
    }
    else
    {
        qDebug() << "Verification Error" << verification.lastError();
    }
}

/**
 * @fn BDD::selectBestScore
 * @brief Fonction de sélection des dix meilleurs scores en BDD.
 * Tries des scores par ordre croissants avec les noms correspondants.
 * Utilisations de deux tableaux pour retransmettre les informations à la fenêtre de scorboard
 */
void BDD::selectBestScore()
{
    //Selection du nom des meilleurs scores pour affichage dans le tableau correspondant
    QSqlQuery selectNom;
    selectNom.prepare("SELECT name FROM T_joueur ORDER BY score DESC LIMIT 10");

    if(selectNom.exec())
    {
        while (selectNom.next())
        {
            for (int i = 0; i<10; i++)
            {
             nomResultat[i] = selectNom.value(0).toString();
             selectNom.next();
            }
        std::cout << "Select done" << std::endl;
        }
    }
    else
    {
        qDebug() << "Select Error" << selectNom.lastError();
    }

    //Selection des meilleurs scores pour affichage dans le tableau correspondant
    QSqlQuery selectScore;
    selectScore.prepare("SELECT score FROM T_joueur ORDER BY score DESC LIMIT 10");

    if(selectScore.exec())
    {
        while (selectScore.next())
        {
            for (int j = 0; j<10; j++)
            {
             scoreResultat[j] = selectScore.value(0).toString();
             if (scoreResultat[j]=="0")
             {
                 //On remplace le 0 par un caractère pour faire plus propre
                 scoreResultat[j]="-";
             }
             selectScore.next();
            }
        std::cout << "Select done" << std::endl;
        }
    }
    else
    {
        qDebug() << "Delete Error" << selectScore.lastError();
    }
}

/**
 * @fn BDD::deleteScore
 * @brief Fonction d'effacement des scores en BDD.
 * A noter que les scores sont mis à 0 dans la BDD. Dans l'application ils apparaissent avec un "-" pour plus de propreté visuelle.
 * Les noms ne sont pas retirés de la BDD afin de correspondre à une logique de réutilisation par la suite de l'utilisateur.
 * On évite ainsi des doublons.
 */
void BDD::deleteScore()
{
    //Effacement des scores de la BDD
    QSqlQuery deleteScore;
    deleteScore.prepare("UPDATE T_joueur SET score = 0");

    if(deleteScore.exec())
    {
        std::cout << "Delete done" << std::endl;
    }
    else
    {
        qDebug() << "Delete Error" << deleteScore.lastError();
    }
}

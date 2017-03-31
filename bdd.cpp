#include "bdd.h"
#include <iostream>

BDD::BDD()
{
    baseDeDonnees = QSqlDatabase::addDatabase("QSQLITE");
    baseDeDonnees.setDatabaseName("baseDeDonnes.db");

    if (baseDeDonnees.open())
    {
        std::cout << "Database opened" << std::endl;
    }
    else
    {
        std::cout << "Error BDD" << std::endl;
    }
}
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

void BDD::selectMot()
{
    QSqlQuery selectMot;
    selectMot.prepare("SELECT word FROM T_mot ORDER BY random() LIMIT 60");

    if(selectMot.exec())
    {
        while (selectMot.next())
        {
            qDebug() << selectMot.value(0).toString();
        }
        std::cout << "Words Selection done" << std::endl;
    }
    else
    {
        qDebug() << "Words Selection Error" << selectMot.lastError();
    }
}

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

void BDD::selectBestScore()
{
    //Selection des meilleurs scores pour affichage dans le tableau correspondant
    QSqlQuery selectScore;
    selectScore.prepare("SELECT name, score FROM T_joueur ORDER BY score DESC LIMIT 10");

    if(selectScore.exec())
    {
        std::cout << "Delete done" << std::endl;
    }
    else
    {
        qDebug() << "Delete Error" << selectScore.lastError();
    }
}

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

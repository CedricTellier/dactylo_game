#ifndef BDD_H
#define BDD_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

class BDD
{

public:
    BDD();

    void createBDD();

    void selectMot();

    void insertJoueur(QString nom, int score);

    void selectBestScore();

    void deleteScore();


private:
    QSqlDatabase baseDeDonnees;

};

#endif // BDD_H

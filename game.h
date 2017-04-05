#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimer>
#include "end.h"
#include "bdd.h"
#include "partie.h"

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    /*
    * Constructeur de base non utilisé
    * explicit game(QWidget *parent = 0);*/

    //Constructeur avec un paramètre//
    game(QString nomJoueur);
    ~game();

    QString couleur;
    void setCouleur(QString couleur);

    void creationTableau();

    void jouer();

    void setMotOrdi(QString motOrdi);

    int pointsField();

    int combo();

    void BDDFindePartie();

    QString getMotOrdi();

    QString getMotSaisie();

    QString tabMots[60];

private slots:

    void on_btSound_clicked();

    void setMotSaisie(QString motSaisie);

private:
    QString motOrdi;
    QString motSaisie;
    Ui::game *ui;
    QMediaPlayer *music;
    QMediaPlaylist *playlist;
    QTimer *time;
};

#endif // GAME_H

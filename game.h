#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>

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

private slots:

     void rejouer();

     void finDePartie();

     void on_btSound_clicked();

     void on_btTest_clicked();

private:
    Ui::game *ui;
    QMediaPlayer *music;
    QMediaPlaylist *playlist;
};

#endif // GAME_H

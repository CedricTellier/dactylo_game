#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QTimer>
#include "end.h"
#include "bdd.h"
#include "joueur.h"
#include "home.h"

namespace Ui {
class game;
}

/**
 * @class game class
 * @brief Classe qui gère toute la partie
 */
class game : public QWidget
{
    Q_OBJECT

public:

    /**
     * @fn game
     * @brief Constructeur de base
     * Non utilisé dans l'application
     * @param parent
     * @brief Aucun parent (pas d'héritage)
     */
    explicit game(QWidget *parent = 0);

    /**
     * @fn game
     * @brief Constructeur de la classe Game
     * @param nomJoueur
     * @brief Nom du joueur demandé
     */
    game(QString nomJoueur);
    ~game();

    /**
     * @brief couleur
     * Variable public pour la transmission de la couleur en fond.
     */
    QString couleur;

    /**
     * @fn setCouleur
     * @brief Utilisation d'une fonction pour insérer la variable couleur en background.
     * @param couleur
     */
    void setCouleur(QString couleur);

    /**
     * @fn creationTableau
     * @brief Fonction qui crée un tableau de mots fournit à l'utilisateur.
     */
    void creationTableau();

    /**
     * @fn jouer
     * @brief Fonction générale qui permet la gestion du jeu.
     */
    void jouer();

    /**
     * @brief getMotOrdi
     * @brief Variable public pour la transmission de la couleur en fond.
     * @return le mot choisi de manière aléatoire par l'ordi dans le tableau de mot de la partie.
     */
    QString getMotOrdi();

    /**
     * @fn setMotOrdi
     * @brief Insère le mot de l'ordi dans une variable privée.
     * @param motOrdi
     * @brief Variable demandée
     */
    void setMotOrdi(QString motOrdi);

    /**
     * @fn pointsField
     * @brief Fonction de calcul des points du joueur
     * @return pOints gagnés par le joueur
     */
    int pointsField();

    /**
     * @fn combo
     * @brief Fonction de points améliorées
     * @return Points du joueurs sou conditions spéciales
     */
    int combo();

    /**
     * @fn getMotSaisie
     * @return Variable récupère le mot saisie par l'utilisateur
     */
    QString getMotSaisie();

    /**
     * @fn setMotSaisie
     * @brief Insert le mot saisie par l'utilisateur dans la variable motSaisie.
     * @param motSaisie
     */
    void setMotSaisie(QString motSaisie);

    /**
     * @brief tabMots
     * Tableau de mots utilisé pour la partie
     */
    QString tabMots[60];

private slots:

    /**
     * @fn on_btSound_clicked
     * @brief Test du son sur la fenêtre joueur.
     */
    void on_btSound_clicked();

    /**
     * @fn miseAJour
     * @brief Slot privé pour le mise à jouer de la Progress Bar
     */
    void miseAJour();

    void on_btSortie_clicked();

private:

    /**
     * @brief motOrdi
     * Variable privée
     */
    QString motOrdi;

    /**
     * @brief motOrdi
     * Variable privée
     */
    QString motSaisie;

    /**
     * @brief ui
     * Interface graphique de la partie (User Interface).
     */
    Ui::game *ui;

    /**
     * @brief music
     * Gestion de la music sur la fenêtre de jeu
     */
    QMediaPlayer *music;

    /**
     * @brief playlist
     * Construction d'une playlist
     */
    QMediaPlaylist *playlist;

    /**
     * @brief time
     * Temps imparti à l'utilisateur pour insérer un mot
     */
    QTimer *time;

    /**
     * @brief player
     * Pointeur vers la classe joueur
     */
    joueur *player;

    /**
     * @brief baseDactylo
     * Pointeur en lien avec la BDD
     */
    BDD *baseDactylo;

    /**
     * @brief chrono
     * Pointeur qui gère la Progress Bar
     */
     QTimer *chrono;

    /**
     * @brief temps
     * Variable privée
     */
    int temps;
};

#endif // GAME_H

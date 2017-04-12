#ifndef HOME_H
#define HOME_H

#include <QMainWindow>
#include "name.h"
#include "scoreboard.h"

namespace Ui {
class home;
}

/**
 * @class home class
 * @brief Classe qui gère la fenêtre d'accueil de l'application
 */
class home : public QMainWindow
{
    Q_OBJECT

public:

    /**
     * @brief home
     * @brief Constructeur de la classe
     * @param parent
     * @brief Aucun parent (pas d'héritage)
     */
    explicit home(QWidget *parent = 0);
    ~home();

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

private slots:

    /**
     * @fn on_btPlay_clicked
     * @brief Bouton de Jeu.
     */
    void on_btPlay_clicked();

    /**
     * @fn on_btExit_clicked
     * @brief Bouton de sortie de l'application.
     */
    void on_btExit_clicked();


    /**
     * @fn on_btScoreboard_clicked
     * @brief Bouton pour se rendre au tableau des scores.
     */
    void on_btScoreboard_clicked();

    /**
     * @fn on_comboBox_currentIndexChanged
     * @brief ListBox qui contrôle le changement de couleur.
     * @param index
     * @brief Choix de la couleur.
     */
    void on_comboBox_currentIndexChanged(int index);

private:
    /**
     * @brief ui
     * Interface graphique de l'accueil (User Interface).
     */
    Ui::home *ui;

};

#endif // HOME_H

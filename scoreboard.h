#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QWidget>
#include "home.h"
#include "bdd.h"
#include <confirmation.h>

namespace Ui {
class scoreboard;
}

/**
 * @class scoreboard class
 * @brief Classe qui gère la fenêtre du tableau des scores de l'application.
 */
class scoreboard : public QWidget
{
    Q_OBJECT

public:

    /**
     * @fn scoreboard
     * @brief Constructeur de base de la classe Scoreboard
     * @param parent
     * @brief Aucun parent (pas d'héritage)
     */
    explicit scoreboard(QWidget *parent = 0);
    ~scoreboard();


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
     * @fn on_btDelete_clicked
     * @brief Bouton d'effacement des données.
     */
    void on_btDelete_clicked();

    /**
     * @fn on_btBack_clicked
     * @brief Bouton de retour.
     */
    void on_btBack_clicked();

private:

    /**
     * @brief ui
     * Interface graphique de l'accueil (User Interface).
     */
    Ui::scoreboard *ui;

    /**
     * @brief baseDactylo
     * Pointeur en lien avec la base de données.
     */
    BDD *baseDactylo;

};

#endif // SCOREBOARD_H

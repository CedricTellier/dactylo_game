#ifndef END_H
#define END_H

#include <QWidget>
#include "home.h"
#include "game.h"

namespace Ui {
class end;
}

/**
 * @class end class
 * @brief Classe réprésentant chaque fin de partie
 * Annonce le score du joueur et lui propse divers choix.
 */
class end : public QWidget
{
    Q_OBJECT

public:

    /**
     * @fn end
     * @brief Constructeur de la classe End
     * @param nomJoueur
     * @brief Nom du joueur demandé
     * @param score
     * @brief Score du joueur demandé
     */
    end(QString nomJoueur, QString score);
    ~end();

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
     * @fn on_btQuit_clicked
     * @brief Bouton de fermture. L'utilisateur ne rejoue pas.
     */
    void on_btQuit_clicked();

    /**
     * @fn on_btRestart_clicked
     * @brief Bouton pour recharger une partie.
     */
    void on_btRestart_clicked();

private:

    /**
     * @brief ui
     * Interface graphique de la fin de partie (User Interface).
     */
    Ui::end *ui;
};

#endif // END_H

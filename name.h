#ifndef NAME_H
#define NAME_H

#include <QWidget>
#include "game.h"
#include "home.h"

namespace Ui {
class Name;
}

/**
 * @class Name class
 * @brief  qui gère la fenêtre de nom du joeur dans l'application.
 */
class Name : public QWidget
{
    Q_OBJECT

public:

    /**
     * @fn Name
     * @brief Constructeur de la classe Name
     * @param parent
     * @brief Aucun parent (pas d'héritage)
     */
    explicit Name(QWidget *parent = 0);
    ~Name();

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
     * @fn on_btStart_clicked
     * @brief Bouton démarrer
     */
    void on_btStart_clicked();

private:
    /**
     * @brief ui
     * Interface graphique de l'accueil (User Interface).
     */
    Ui::Name *ui;
};

#endif // NAME_H

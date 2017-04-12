#ifndef CONFIRMATION_H
#define CONFIRMATION_H

#include <QWidget>
#include <scoreboard.h>
#include <bdd.h>
#include <home.h>


namespace Ui {
class confirmation;
}

/**
 * @class confirmation class
 * @brief Cette classe crée un lien après la suppression des scores en BDD.
 */
class confirmation : public QWidget
{
    Q_OBJECT

public:
    /**
     * @fn confirmation
     * @brief Constructeur de base de la classe
     * @param parent
     * @brief Aucun parent (pas d'héritage)
     */
    explicit confirmation(QWidget *parent = 0);
    ~confirmation();

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
     * @fn on_btAnnuler_clicked
     * @brief Bouton servant à annuler l'action
     */
    void on_btAnnuler_clicked();

    /**
     * @fn on_btOk_clicked
     * @brief Bouton servant à valider l'action et confirmer l'annulation des scores.
     */
    void on_btOk_clicked();

private:
    /**
     * @brief ui
     * Interface graphique de la confirmation (User Interface).
     */
    Ui::confirmation *ui;

    /**
     * @brief baseDacylo
     * pointeur privée pour créer un lien avec la base de données.
     */
    BDD *baseDacylo;
};

#endif // CONFIRMATION_H

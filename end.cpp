#include "end.h"
#include "ui_end.h"

/**
 * @brief end::end
 * @brief Constructeur paramètré de la classe End.
 * @param nomJoueur
 * @brief Variable récupérée dans la classe game.
 * @param score
 * @brief Variable récupérée dans la classe game.
 */
end::end(QString nomJoueur, QString score):
    ui(new Ui::end)
{
    ui->setupUi(this);
    ui->lbRNomJoueur->setText(nomJoueur);
    ui->lbRNbScore->setText(score);
    ui->btRestart->setFocus();
 }

/**
 * @fn end::~end
 * @brief Destruction du pointeur utilisé.
 */
end::~end()
{
    delete ui;
}

/**
 * @fn confirmation::setCouleur
 * @brief Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * @brief Paramètre récupéré et transmis.
 */
void end::setCouleur(QString couleur)
{
    this->couleur = couleur;
}

/**
 * @fn end::on_btQuit_clicked
 * @brief Bouton qui quitte le jeu.
 * Le joueur choisit de ne pas recommencer une partie.
 * On crée un pointeur vers l'accueil.
 * On ouvre cette fenêtre d'accueil.
 * On ferme la fenêtre existante End.
 */
void end::on_btQuit_clicked()
{
    //Création de la fenêtre Accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre d'accueil
    accueil->show();

    //Fermeture de la fenête de fin de partie
    this->close();
}

/**
 * @fn end::on_btRestart_clicked
 * @brief Bouton qui redémarre une partie.
 * On crée un pointeur vers game.
 * On récupère le nom du joueur qui sera retransmis au constructeur avec ce paramètre.
 * On ouvre la fenêttre de jeu.
 * On ferme la fenêtre existante End.
 */
void end::on_btRestart_clicked()
{
    //Création de la fenêtre de jeu
    game *monJeu = new game(ui->lbRNomJoueur->text());

    //Gestion de la couleur
    monJeu->setStyleSheet(couleur);
    monJeu->setCouleur(couleur);

    //Fermeture de la fenête de fin de jeu
    this->close();

    //Ouverture de la fenêtre de jeu
    monJeu->show();

    //Création aléatoire des mots et lancement du jeu
    monJeu->creationTableau();
    monJeu->jouer();
}

#include "scoreboard.h"
#include "ui_scoreboard.h"

/**
 * @brief scoreboard::scoreboard
 * @brief Constructeur de base de la classe Scoreboard.
 * On instancie une connection avec la base de données.
 * On utilise la fonction de selection des meilleurs scores.
 * On intègre en retour les résultats du tableau de la requète dans nos différents labels.
 * @param parent
 * @brief Aucun parent (Pas d'héritage).
 */
scoreboard::scoreboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scoreboard)
{
    ui->setupUi(this);

    //Connection à la base de donnée
    BDD *baseDactylo = new BDD();
    baseDactylo->connexion();
    baseDactylo->createBDD();
    baseDactylo->selectBestScore();


    //Insertion dans les labels correspondants des noms triés
    ui->lbNom1->setText(baseDactylo->nomResultat[0]);
    ui->lbNom2->setText(baseDactylo->nomResultat[1]);
    ui->lbNom3->setText(baseDactylo->nomResultat[2]);
    ui->lbNom4->setText(baseDactylo->nomResultat[3]);
    ui->lbNom5->setText(baseDactylo->nomResultat[4]);
    ui->lbNom6->setText(baseDactylo->nomResultat[5]);
    ui->lbNom7->setText(baseDactylo->nomResultat[6]);
    ui->lbNom8->setText(baseDactylo->nomResultat[7]);
    ui->lbNom9->setText(baseDactylo->nomResultat[8]);
    ui->lbNom10->setText(baseDactylo->nomResultat[9]);

    //Insertion dans les labels correspondants des scores triés
    ui->lbScore1->setText(baseDactylo->scoreResultat[0]);
    ui->lbScore2->setText(baseDactylo->scoreResultat[1]);
    ui->lbScore3->setText(baseDactylo->scoreResultat[2]);
    ui->lbScore4->setText(baseDactylo->scoreResultat[3]);
    ui->lbScore5->setText(baseDactylo->scoreResultat[4]);
    ui->lbScore6->setText(baseDactylo->scoreResultat[5]);
    ui->lbScore7->setText(baseDactylo->scoreResultat[6]);
    ui->lbScore8->setText(baseDactylo->scoreResultat[7]);
    ui->lbScore9->setText(baseDactylo->scoreResultat[8]);
    ui->lbScore10->setText(baseDactylo->scoreResultat[9]);

    //Gestion de la couleur
    ui->lbClassement->setStyleSheet(couleur);
    ui->lbNom->setStyleSheet(couleur);
    ui->lbScore->setStyleSheet(couleur);
    ui->lbPos2->setStyleSheet(couleur);
    ui->lbNom2->setStyleSheet(couleur);
    ui->lbScore2->setStyleSheet(couleur);
    ui->lbPos4->setStyleSheet(couleur);
    ui->lbNom4->setStyleSheet(couleur);
    ui->lbScore4->setStyleSheet(couleur);
    ui->lbScore4->setStyleSheet(couleur);
    ui->lbPos6->setStyleSheet(couleur);
    ui->lbNom6->setStyleSheet(couleur);
    ui->lbScore6->setStyleSheet(couleur);
    ui->lbPos8->setStyleSheet(couleur);
    ui->lbNom8->setStyleSheet(couleur);
    ui->lbScore8->setStyleSheet(couleur);
    ui->lbPos10->setStyleSheet(couleur);
    ui->lbNom10->setStyleSheet(couleur);
    ui->lbScore10->setStyleSheet(couleur);
}
/**
 * @fn scoreboard::~scoreboard
 * @brief Destruction des pointeurs associées à cet UI.
 */
scoreboard::~scoreboard()
{
    delete ui;
    delete baseDactylo;
}

/**
 * @fn scoreboard::on_btDelete_clicked
 * @brief Bouton de suppression des scores.
 * On crée le pointeur associé vers la confirmation.
 * On ouvre la fenêtre de confirmation.
 * On ferme la fenêtre existante des scores.
 */
void scoreboard::on_btDelete_clicked()
{
    //Création du pointeur Vers la fenêtre de confirmation
    confirmation *confirm = new confirmation();

    //Gestion de la couleur
    confirm->setStyleSheet(couleur);
    confirm->setCouleur(couleur);

    //Ouverture de la fenetre de confirmation
    confirm->show();

    //Fermeture la fenêtre des scores
    this->close();
}

/**
 * @fn scoreboard::on_btBack_clicked
 * @brief Bouton retour vers l'accueil
 * On crée le pointeur associé.
 * On ouvre la fenêtre d'accueil
 * On ferme la fenêtre existante des Scores.
 */
void scoreboard::on_btBack_clicked()
{
    // Création d'une fenêtre vers l'accueil
    home *accueil = new home();

    //Gestion de la couleur
    accueil->setStyleSheet(couleur);
    accueil->setCouleur(couleur);

    //Ouverture de la fenêtre
    accueil->show();

    //Fermeture de la fenêtre des Scores
    this->close();
}

/**
 * @fn scoreboard::setCouleur
 * Récupère la couleur de l'ui précdente afin de l'insérer dans son propre Stylesheet.
 * @param couleur
 * Paramètre récupéré et transmis.
 */
void scoreboard::setCouleur(QString couleur)
{
    this->couleur = couleur;
}


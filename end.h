#ifndef END_H
#define END_H

#include <QWidget>

namespace Ui {
class end;
}

class end : public QWidget
{
    Q_OBJECT

public:

    //Constructeur non utilise
    /*explicit end(QWidget *parent = 0);
    ~end();*/

    end(QString nomJoueur, QString score);
   ~end();

    QString couleur;
    void setCouleur(QString couleur);

private slots:
    void on_btQuit_clicked();

    void on_btRestart_clicked();

private:
    Ui::end *ui;
};

#endif // END_H

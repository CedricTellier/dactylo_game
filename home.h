#ifndef HOME_H
#define HOME_H

#include <QMainWindow>

namespace Ui {
class home;
}

class home : public QMainWindow
{
    Q_OBJECT

public:

    explicit home(QWidget *parent = 0);
    ~home();

    QString couleur;
    void setCouleur(QString couleur);

private slots:

    void on_btPlay_clicked();

    void on_btExit_clicked();

    void on_btScoreboard_clicked();

    void on_comboBox_currentIndexChanged(int index);

private:
    Ui::home *ui;

};

#endif // HOME_H

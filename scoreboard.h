#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QWidget>

namespace Ui {
class scoreboard;
}

class scoreboard : public QWidget
{
    Q_OBJECT

public:

    explicit scoreboard(QWidget *parent = 0);
    ~scoreboard();

    QString couleur;
    void setCouleur(QString couleur);

private slots:

    void on_btDelete_clicked();

    void on_btBack_clicked();

private:
    Ui::scoreboard *ui;
};

#endif // SCOREBOARD_H

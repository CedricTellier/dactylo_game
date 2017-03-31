#ifndef NAME_H
#define NAME_H

#include <QWidget>

namespace Ui {
class Name;
}

class Name : public QWidget
{
    Q_OBJECT

public:

    explicit Name(QWidget *parent = 0);
    ~Name();

    QString couleur;
    void setCouleur(QString couleur);

private slots:

    void on_btStart_clicked();

private:
    Ui::Name *ui;
};

#endif // NAME_H

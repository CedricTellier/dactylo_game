/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_end
{
public:
    QPushButton *btRestart;
    QPushButton *btQuit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbScore;
    QLabel *lbRNbScore;
    QLabel *lbRNomJoueur;
    QLabel *label;

    void setupUi(QWidget *end)
    {
        if (end->objectName().isEmpty())
            end->setObjectName(QString::fromUtf8("end"));
        end->resize(461, 276);
        QFont font;
        font.setFamily(QString::fromUtf8("Candara"));
        font.setPointSize(12);
        end->setFont(font);
        end->setFocusPolicy(Qt::NoFocus);
        btRestart = new QPushButton(end);
        btRestart->setObjectName(QString::fromUtf8("btRestart"));
        btRestart->setGeometry(QRect(40, 190, 171, 61));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        btRestart->setFont(font1);
        btRestart->setFocusPolicy(Qt::TabFocus);
        btRestart->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btRestart->setAutoDefault(true);
        btQuit = new QPushButton(end);
        btQuit->setObjectName(QString::fromUtf8("btQuit"));
        btQuit->setGeometry(QRect(250, 190, 171, 61));
        btQuit->setFont(font1);
        btQuit->setFocusPolicy(Qt::TabFocus);
        btQuit->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btQuit->setAutoDefault(true);
        gridLayoutWidget = new QWidget(end);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 90, 141, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbScore = new QLabel(gridLayoutWidget);
        lbScore->setObjectName(QString::fromUtf8("lbScore"));
        lbScore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore, 1, 1, 1, 1);

        lbRNbScore = new QLabel(gridLayoutWidget);
        lbRNbScore->setObjectName(QString::fromUtf8("lbRNbScore"));
        lbRNbScore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbRNbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbRNbScore, 1, 2, 1, 1);

        lbRNomJoueur = new QLabel(gridLayoutWidget);
        lbRNomJoueur->setObjectName(QString::fromUtf8("lbRNomJoueur"));
        lbRNomJoueur->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbRNomJoueur->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbRNomJoueur, 0, 1, 1, 2);

        label = new QLabel(end);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 411, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(end);

        QMetaObject::connectSlotsByName(end);
    } // setupUi

    void retranslateUi(QWidget *end)
    {
        end->setWindowTitle(QApplication::translate("end", "Rejouer", nullptr));
        btRestart->setText(QApplication::translate("end", "Restart", nullptr));
        btQuit->setText(QApplication::translate("end", "Exit", nullptr));
        lbScore->setText(QApplication::translate("end", "Score", nullptr));
        lbRNbScore->setText(QString());
        lbRNomJoueur->setText(QString());
        label->setText(QApplication::translate("end", "Dommage, vous venez de perdre!\n"
" Allez encore un effort,  vous pouvez faire mieux!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class end: public Ui_end {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H

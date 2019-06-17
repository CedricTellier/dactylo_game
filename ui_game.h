/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbScore;
    QLabel *lbJoker;
    QLabel *lbNbJoker;
    QLabel *lbNbScore;
    QLabel *lbNomJoueur;
    QLineEdit *leTaper;
    QPushButton *btSound;
    QLabel *lbMots;
    QProgressBar *PBtime;
    QPushButton *btSortie;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QString::fromUtf8("game"));
        game->resize(574, 400);
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setKerning(true);
        game->setFont(font);
        game->setFocusPolicy(Qt::NoFocus);
        game->setStyleSheet(QString::fromUtf8(""));
        gridLayoutWidget = new QWidget(game);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(190, 10, 201, 81));
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

        lbJoker = new QLabel(gridLayoutWidget);
        lbJoker->setObjectName(QString::fromUtf8("lbJoker"));
        lbJoker->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbJoker->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbJoker, 2, 1, 1, 1);

        lbNbJoker = new QLabel(gridLayoutWidget);
        lbNbJoker->setObjectName(QString::fromUtf8("lbNbJoker"));
        lbNbJoker->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNbJoker->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNbJoker, 2, 2, 1, 1);

        lbNbScore = new QLabel(gridLayoutWidget);
        lbNbScore->setObjectName(QString::fromUtf8("lbNbScore"));
        lbNbScore->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNbScore, 1, 2, 1, 1);

        lbNomJoueur = new QLabel(gridLayoutWidget);
        lbNomJoueur->setObjectName(QString::fromUtf8("lbNomJoueur"));
        lbNomJoueur->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNomJoueur->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNomJoueur, 0, 1, 1, 2);

        leTaper = new QLineEdit(game);
        leTaper->setObjectName(QString::fromUtf8("leTaper"));
        leTaper->setEnabled(true);
        leTaper->setGeometry(QRect(20, 310, 461, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        leTaper->setFont(font1);
        leTaper->setFocusPolicy(Qt::TabFocus);
        leTaper->setContextMenuPolicy(Qt::ActionsContextMenu);
        leTaper->setAcceptDrops(true);
        leTaper->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 15px;"));
        leTaper->setAlignment(Qt::AlignCenter);
        btSound = new QPushButton(game);
        btSound->setObjectName(QString::fromUtf8("btSound"));
        btSound->setGeometry(QRect(420, 40, 131, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        btSound->setFont(font2);
        btSound->setFocusPolicy(Qt::TabFocus);
        btSound->setStyleSheet(QString::fromUtf8("background-color: #54F98D;\n"
"border-radius:10px;\n"
"outline:none;"));
        btSound->setAutoDefault(true);
        lbMots = new QLabel(game);
        lbMots->setObjectName(QString::fromUtf8("lbMots"));
        lbMots->setGeometry(QRect(30, 140, 451, 141));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Verdana"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        lbMots->setFont(font3);
        lbMots->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lbMots->setAlignment(Qt::AlignCenter);
        PBtime = new QProgressBar(game);
        PBtime->setObjectName(QString::fromUtf8("PBtime"));
        PBtime->setGeometry(QRect(520, 120, 21, 241));
        PBtime->setAutoFillBackground(false);
        PBtime->setStyleSheet(QString::fromUtf8(":chunk{background-color:green; border-radius:10px;}\n"
"#PBtime{background-color:white; border-radius:10px;}"));
        PBtime->setInputMethodHints(Qt::ImhNone);
        PBtime->setMaximum(60);
        PBtime->setValue(60);
        PBtime->setAlignment(Qt::AlignCenter);
        PBtime->setTextVisible(false);
        PBtime->setOrientation(Qt::Vertical);
        PBtime->setTextDirection(QProgressBar::BottomToTop);
        btSortie = new QPushButton(game);
        btSortie->setObjectName(QString::fromUtf8("btSortie"));
        btSortie->setGeometry(QRect(30, 40, 131, 51));
        btSortie->setFont(font2);
        btSortie->setFocusPolicy(Qt::TabFocus);
        btSortie->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btSortie->setAutoDefault(true);

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Jeu", nullptr));
        lbScore->setText(QApplication::translate("game", "Score", nullptr));
        lbJoker->setText(QApplication::translate("game", "Joker", nullptr));
        lbNbJoker->setText(QString());
        lbNbScore->setText(QString());
        lbNomJoueur->setText(QString());
        leTaper->setPlaceholderText(QApplication::translate("game", "Zone de saisie", nullptr));
        btSound->setText(QApplication::translate("game", "Sound", nullptr));
        lbMots->setText(QString());
        btSortie->setText(QApplication::translate("game", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H

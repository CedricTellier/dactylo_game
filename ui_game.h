/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QOpenGLWidget>
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
    QPushButton *btPause;
    QLineEdit *leTaper;
    QOpenGLWidget *OpenGLjeu;
    QPushButton *btSound;
    QPushButton *btTest;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(742, 436);
        QFont font;
        font.setFamily(QStringLiteral("MS UI Gothic"));
        font.setKerning(true);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        gridLayoutWidget = new QWidget(game);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 141, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbScore = new QLabel(gridLayoutWidget);
        lbScore->setObjectName(QStringLiteral("lbScore"));
        lbScore->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore, 1, 1, 1, 1);

        lbJoker = new QLabel(gridLayoutWidget);
        lbJoker->setObjectName(QStringLiteral("lbJoker"));
        lbJoker->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbJoker->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbJoker, 2, 1, 1, 1);

        lbNbJoker = new QLabel(gridLayoutWidget);
        lbNbJoker->setObjectName(QStringLiteral("lbNbJoker"));
        lbNbJoker->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNbJoker->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNbJoker, 2, 2, 1, 1);

        lbNbScore = new QLabel(gridLayoutWidget);
        lbNbScore->setObjectName(QStringLiteral("lbNbScore"));
        lbNbScore->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNbScore, 1, 2, 1, 1);

        lbNomJoueur = new QLabel(gridLayoutWidget);
        lbNomJoueur->setObjectName(QStringLiteral("lbNomJoueur"));
        lbNomJoueur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbNomJoueur->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNomJoueur, 0, 1, 1, 2);

        btPause = new QPushButton(game);
        btPause->setObjectName(QStringLiteral("btPause"));
        btPause->setGeometry(QRect(30, 360, 151, 51));
        btPause->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));
        leTaper = new QLineEdit(game);
        leTaper->setObjectName(QStringLiteral("leTaper"));
        leTaper->setGeometry(QRect(260, 360, 341, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        leTaper->setFont(font1);
        leTaper->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 15px;"));
        leTaper->setAlignment(Qt::AlignCenter);
        OpenGLjeu = new QOpenGLWidget(game);
        OpenGLjeu->setObjectName(QStringLiteral("OpenGLjeu"));
        OpenGLjeu->setGeometry(QRect(160, 10, 571, 341));
        OpenGLjeu->setToolTipDuration(6);
        OpenGLjeu->setLayoutDirection(Qt::RightToLeft);
        btSound = new QPushButton(game);
        btSound->setObjectName(QStringLiteral("btSound"));
        btSound->setGeometry(QRect(650, 370, 75, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(12);
        btSound->setFont(font2);
        btSound->setStyleSheet(QLatin1String("background-color: green\n"
""));
        btTest = new QPushButton(game);
        btTest->setObjectName(QStringLiteral("btTest"));
        btTest->setGeometry(QRect(40, 170, 81, 51));

        retranslateUi(game);

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Jeu", Q_NULLPTR));
        lbScore->setText(QApplication::translate("game", "Score", Q_NULLPTR));
        lbJoker->setText(QApplication::translate("game", "Joker", Q_NULLPTR));
        lbNbJoker->setText(QString());
        lbNbScore->setText(QString());
        lbNomJoueur->setText(QString());
        btPause->setText(QApplication::translate("game", "Pause / Lecture", Q_NULLPTR));
        leTaper->setPlaceholderText(QApplication::translate("game", "Zone de saisie", Q_NULLPTR));
        btSound->setText(QApplication::translate("game", "Sound", Q_NULLPTR));
        btTest->setText(QApplication::translate("game", "Test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H

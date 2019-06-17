/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scoreboard
{
public:
    QLabel *label;
    QPushButton *btBack;
    QPushButton *btDelete;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbPos7;
    QLabel *lbNom7;
    QLabel *lbPos5;
    QLabel *lbNom3;
    QLabel *lbNom4;
    QLabel *lbNom5;
    QLabel *lbScore3;
    QLabel *lbScore4;
    QLabel *lbScore6;
    QLabel *lbNom6;
    QLabel *lbScore2;
    QLabel *lbScore;
    QLabel *lbNom;
    QLabel *lbScore7;
    QLabel *lbNom8;
    QLabel *lbScore8;
    QLabel *lbPos10;
    QLabel *lbScore1;
    QLabel *lbScore10;
    QLabel *lbNom10;
    QLabel *lbNom9;
    QLabel *lbScore9;
    QLabel *lbPos9;
    QLabel *lbPos2;
    QLabel *lbPos1;
    QLabel *lbPos3;
    QLabel *lbPos4;
    QLabel *lbPos6;
    QLabel *lbNom1;
    QLabel *lbNom2;
    QLabel *lbClassement;
    QLabel *lbPos8;
    QLabel *lbScore5;

    void setupUi(QWidget *scoreboard)
    {
        if (scoreboard->objectName().isEmpty())
            scoreboard->setObjectName(QString::fromUtf8("scoreboard"));
        scoreboard->resize(533, 644);
        scoreboard->setFocusPolicy(Qt::NoFocus);
        scoreboard->setAutoFillBackground(false);
        label = new QLabel(scoreboard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 20, 121, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);
        btBack = new QPushButton(scoreboard);
        btBack->setObjectName(QString::fromUtf8("btBack"));
        btBack->setGeometry(QRect(290, 560, 111, 51));
        btBack->setFont(font);
        btBack->setFocusPolicy(Qt::TabFocus);
        btBack->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btBack->setAutoDefault(true);
        btDelete = new QPushButton(scoreboard);
        btDelete->setObjectName(QString::fromUtf8("btDelete"));
        btDelete->setGeometry(QRect(130, 560, 111, 51));
        btDelete->setFont(font);
        btDelete->setFocusPolicy(Qt::TabFocus);
        btDelete->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btDelete->setAutoDefault(true);
        gridLayoutWidget = new QWidget(scoreboard);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 70, 481, 471));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lbPos7 = new QLabel(gridLayoutWidget);
        lbPos7->setObjectName(QString::fromUtf8("lbPos7"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(11);
        lbPos7->setFont(font1);
        lbPos7->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbPos7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos7, 7, 0, 1, 1);

        lbNom7 = new QLabel(gridLayoutWidget);
        lbNom7->setObjectName(QString::fromUtf8("lbNom7"));
        lbNom7->setFont(font1);
        lbNom7->setStyleSheet(QString::fromUtf8("background-color: white;"));
        lbNom7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom7, 7, 1, 1, 1);

        lbPos5 = new QLabel(gridLayoutWidget);
        lbPos5->setObjectName(QString::fromUtf8("lbPos5"));
        lbPos5->setFont(font1);
        lbPos5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbPos5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos5, 5, 0, 1, 1);

        lbNom3 = new QLabel(gridLayoutWidget);
        lbNom3->setObjectName(QString::fromUtf8("lbNom3"));
        lbNom3->setFont(font1);
        lbNom3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbNom3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom3, 3, 1, 1, 1);

        lbNom4 = new QLabel(gridLayoutWidget);
        lbNom4->setObjectName(QString::fromUtf8("lbNom4"));
        lbNom4->setFont(font1);
        lbNom4->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom4, 4, 1, 1, 1);

        lbNom5 = new QLabel(gridLayoutWidget);
        lbNom5->setObjectName(QString::fromUtf8("lbNom5"));
        lbNom5->setFont(font1);
        lbNom5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbNom5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom5, 5, 1, 1, 1);

        lbScore3 = new QLabel(gridLayoutWidget);
        lbScore3->setObjectName(QString::fromUtf8("lbScore3"));
        lbScore3->setFont(font1);
        lbScore3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbScore3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore3, 3, 2, 1, 1);

        lbScore4 = new QLabel(gridLayoutWidget);
        lbScore4->setObjectName(QString::fromUtf8("lbScore4"));
        lbScore4->setFont(font1);
        lbScore4->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore4, 4, 2, 1, 1);

        lbScore6 = new QLabel(gridLayoutWidget);
        lbScore6->setObjectName(QString::fromUtf8("lbScore6"));
        lbScore6->setFont(font1);
        lbScore6->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore6, 6, 2, 1, 1);

        lbNom6 = new QLabel(gridLayoutWidget);
        lbNom6->setObjectName(QString::fromUtf8("lbNom6"));
        lbNom6->setFont(font1);
        lbNom6->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom6, 6, 1, 1, 1);

        lbScore2 = new QLabel(gridLayoutWidget);
        lbScore2->setObjectName(QString::fromUtf8("lbScore2"));
        lbScore2->setFont(font1);
        lbScore2->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore2, 2, 2, 1, 1);

        lbScore = new QLabel(gridLayoutWidget);
        lbScore->setObjectName(QString::fromUtf8("lbScore"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lbScore->setFont(font2);
        lbScore->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore, 0, 2, 1, 1);

        lbNom = new QLabel(gridLayoutWidget);
        lbNom->setObjectName(QString::fromUtf8("lbNom"));
        lbNom->setFont(font2);
        lbNom->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom, 0, 1, 1, 1);

        lbScore7 = new QLabel(gridLayoutWidget);
        lbScore7->setObjectName(QString::fromUtf8("lbScore7"));
        lbScore7->setFont(font1);
        lbScore7->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbScore7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore7, 7, 2, 1, 1);

        lbNom8 = new QLabel(gridLayoutWidget);
        lbNom8->setObjectName(QString::fromUtf8("lbNom8"));
        lbNom8->setFont(font1);
        lbNom8->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom8, 8, 1, 1, 1);

        lbScore8 = new QLabel(gridLayoutWidget);
        lbScore8->setObjectName(QString::fromUtf8("lbScore8"));
        lbScore8->setFont(font1);
        lbScore8->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore8, 8, 2, 1, 1);

        lbPos10 = new QLabel(gridLayoutWidget);
        lbPos10->setObjectName(QString::fromUtf8("lbPos10"));
        lbPos10->setFont(font1);
        lbPos10->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbPos10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos10, 10, 0, 1, 1);

        lbScore1 = new QLabel(gridLayoutWidget);
        lbScore1->setObjectName(QString::fromUtf8("lbScore1"));
        lbScore1->setFont(font1);
        lbScore1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lbScore1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore1, 1, 2, 1, 1);

        lbScore10 = new QLabel(gridLayoutWidget);
        lbScore10->setObjectName(QString::fromUtf8("lbScore10"));
        lbScore10->setFont(font1);
        lbScore10->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbScore10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore10, 10, 2, 1, 1);

        lbNom10 = new QLabel(gridLayoutWidget);
        lbNom10->setObjectName(QString::fromUtf8("lbNom10"));
        lbNom10->setFont(font1);
        lbNom10->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom10, 10, 1, 1, 1);

        lbNom9 = new QLabel(gridLayoutWidget);
        lbNom9->setObjectName(QString::fromUtf8("lbNom9"));
        lbNom9->setFont(font1);
        lbNom9->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbNom9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom9, 9, 1, 1, 1);

        lbScore9 = new QLabel(gridLayoutWidget);
        lbScore9->setObjectName(QString::fromUtf8("lbScore9"));
        lbScore9->setFont(font1);
        lbScore9->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbScore9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore9, 9, 2, 1, 1);

        lbPos9 = new QLabel(gridLayoutWidget);
        lbPos9->setObjectName(QString::fromUtf8("lbPos9"));
        lbPos9->setFont(font1);
        lbPos9->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbPos9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos9, 9, 0, 1, 1);

        lbPos2 = new QLabel(gridLayoutWidget);
        lbPos2->setObjectName(QString::fromUtf8("lbPos2"));
        lbPos2->setFont(font1);
        lbPos2->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbPos2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos2, 2, 0, 1, 1);

        lbPos1 = new QLabel(gridLayoutWidget);
        lbPos1->setObjectName(QString::fromUtf8("lbPos1"));
        lbPos1->setFont(font1);
        lbPos1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lbPos1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos1, 1, 0, 1, 1);

        lbPos3 = new QLabel(gridLayoutWidget);
        lbPos3->setObjectName(QString::fromUtf8("lbPos3"));
        lbPos3->setFont(font1);
        lbPos3->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbPos3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos3, 3, 0, 1, 1);

        lbPos4 = new QLabel(gridLayoutWidget);
        lbPos4->setObjectName(QString::fromUtf8("lbPos4"));
        lbPos4->setFont(font1);
        lbPos4->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbPos4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos4, 4, 0, 1, 1);

        lbPos6 = new QLabel(gridLayoutWidget);
        lbPos6->setObjectName(QString::fromUtf8("lbPos6"));
        lbPos6->setFont(font1);
        lbPos6->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbPos6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos6, 6, 0, 1, 1);

        lbNom1 = new QLabel(gridLayoutWidget);
        lbNom1->setObjectName(QString::fromUtf8("lbNom1"));
        lbNom1->setFont(font1);
        lbNom1->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        lbNom1->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom1, 1, 1, 1, 1);

        lbNom2 = new QLabel(gridLayoutWidget);
        lbNom2->setObjectName(QString::fromUtf8("lbNom2"));
        lbNom2->setFont(font1);
        lbNom2->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbNom2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbNom2, 2, 1, 1, 1);

        lbClassement = new QLabel(gridLayoutWidget);
        lbClassement->setObjectName(QString::fromUtf8("lbClassement"));
        lbClassement->setFont(font2);
        lbClassement->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbClassement->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbClassement, 0, 0, 1, 1);

        lbPos8 = new QLabel(gridLayoutWidget);
        lbPos8->setObjectName(QString::fromUtf8("lbPos8"));
        lbPos8->setFont(font1);
        lbPos8->setStyleSheet(QString::fromUtf8("background-color:#B0E0E6;\n"
"border-radius: 10px;"));
        lbPos8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbPos8, 8, 0, 1, 1);

        lbScore5 = new QLabel(gridLayoutWidget);
        lbScore5->setObjectName(QString::fromUtf8("lbScore5"));
        lbScore5->setFont(font1);
        lbScore5->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius: 10px;"));
        lbScore5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbScore5, 5, 2, 1, 1);


        retranslateUi(scoreboard);

        QMetaObject::connectSlotsByName(scoreboard);
    } // setupUi

    void retranslateUi(QWidget *scoreboard)
    {
        scoreboard->setWindowTitle(QApplication::translate("scoreboard", "ScoreBoard", nullptr));
        label->setText(QApplication::translate("scoreboard", "Scoreboard", nullptr));
        btBack->setText(QApplication::translate("scoreboard", "Back", nullptr));
        btDelete->setText(QApplication::translate("scoreboard", "Delete All", nullptr));
        lbPos7->setText(QApplication::translate("scoreboard", "7", nullptr));
        lbNom7->setText(QString());
        lbPos5->setText(QApplication::translate("scoreboard", "5", nullptr));
        lbNom3->setText(QString());
        lbNom4->setText(QString());
        lbNom5->setText(QString());
        lbScore3->setText(QString());
        lbScore4->setText(QString());
        lbScore6->setText(QString());
        lbNom6->setText(QString());
        lbScore2->setText(QString());
        lbScore->setText(QApplication::translate("scoreboard", "Score", nullptr));
        lbNom->setText(QApplication::translate("scoreboard", "Nom", nullptr));
        lbScore7->setText(QString());
        lbNom8->setText(QString());
        lbScore8->setText(QString());
        lbPos10->setText(QApplication::translate("scoreboard", "10", nullptr));
        lbScore1->setText(QString());
        lbScore10->setText(QString());
        lbNom10->setText(QString());
        lbNom9->setText(QString());
        lbScore9->setText(QString());
        lbPos9->setText(QApplication::translate("scoreboard", "9", nullptr));
        lbPos2->setText(QApplication::translate("scoreboard", "2", nullptr));
        lbPos1->setText(QApplication::translate("scoreboard", "1", nullptr));
        lbPos3->setText(QApplication::translate("scoreboard", "3", nullptr));
        lbPos4->setText(QApplication::translate("scoreboard", "4", nullptr));
        lbPos6->setText(QApplication::translate("scoreboard", "6", nullptr));
        lbNom1->setText(QString());
        lbNom2->setText(QString());
        lbClassement->setText(QApplication::translate("scoreboard", "Classement", nullptr));
        lbPos8->setText(QApplication::translate("scoreboard", "8", nullptr));
        lbScore5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class scoreboard: public Ui_scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H

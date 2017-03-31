/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_scoreboard
{
public:
    QLabel *label;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTableView *Scoreboard;
    QPushButton *btBack;
    QPushButton *btDelete;

    void setupUi(QWidget *scoreboard)
    {
        if (scoreboard->objectName().isEmpty())
            scoreboard->setObjectName(QStringLiteral("scoreboard"));
        scoreboard->resize(553, 527);
        scoreboard->setAutoFillBackground(false);
        label = new QLabel(scoreboard);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(scoreboard);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(79, 69, 381, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Scoreboard = new QTableView(gridLayoutWidget);
        Scoreboard->setObjectName(QStringLiteral("Scoreboard"));
        Scoreboard->setTextElideMode(Qt::ElideLeft);

        gridLayout->addWidget(Scoreboard, 0, 0, 1, 1);

        btBack = new QPushButton(scoreboard);
        btBack->setObjectName(QStringLiteral("btBack"));
        btBack->setGeometry(QRect(310, 440, 111, 51));
        btBack->setFont(font);
        btBack->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));
        btDelete = new QPushButton(scoreboard);
        btDelete->setObjectName(QStringLiteral("btDelete"));
        btDelete->setGeometry(QRect(120, 440, 111, 51));
        btDelete->setFont(font);
        btDelete->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));

        retranslateUi(scoreboard);

        QMetaObject::connectSlotsByName(scoreboard);
    } // setupUi

    void retranslateUi(QWidget *scoreboard)
    {
        scoreboard->setWindowTitle(QApplication::translate("scoreboard", "ScoreBoard", Q_NULLPTR));
        label->setText(QApplication::translate("scoreboard", "Scoreboard", Q_NULLPTR));
        btBack->setText(QApplication::translate("scoreboard", "Back", Q_NULLPTR));
        btDelete->setText(QApplication::translate("scoreboard", "Delete All", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class scoreboard: public Ui_scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H

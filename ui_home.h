/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_home
{
public:
    QWidget *centralWidget;
    QLabel *lbBienvenue;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *btPlay;
    QPushButton *btScoreboard;
    QPushButton *btExit;

    void setupUi(QMainWindow *home)
    {
        if (home->objectName().isEmpty())
            home->setObjectName(QStringLiteral("home"));
        home->resize(502, 440);
        centralWidget = new QWidget(home);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lbBienvenue = new QLabel(centralWidget);
        lbBienvenue->setObjectName(QStringLiteral("lbBienvenue"));
        lbBienvenue->setGeometry(QRect(50, 10, 371, 41));
        lbBienvenue->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbBienvenue->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 370, 251, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        font1.setPointSize(12);
        comboBox->setFont(font1);
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setIconSize(QSize(7, 30));

        horizontalLayout->addWidget(comboBox);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 60, 261, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btPlay = new QPushButton(verticalLayoutWidget);
        btPlay->setObjectName(QStringLiteral("btPlay"));
        btPlay->setMinimumSize(QSize(70, 80));
        QFont font2;
        font2.setFamily(QStringLiteral("Verdana"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        btPlay->setFont(font2);
        btPlay->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));

        verticalLayout->addWidget(btPlay);

        btScoreboard = new QPushButton(verticalLayoutWidget);
        btScoreboard->setObjectName(QStringLiteral("btScoreboard"));
        btScoreboard->setMinimumSize(QSize(70, 80));
        btScoreboard->setFont(font2);
        btScoreboard->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));

        verticalLayout->addWidget(btScoreboard);

        btExit = new QPushButton(verticalLayoutWidget);
        btExit->setObjectName(QStringLiteral("btExit"));
        btExit->setMinimumSize(QSize(70, 80));
        btExit->setFont(font2);
        btExit->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));

        verticalLayout->addWidget(btExit);

        home->setCentralWidget(centralWidget);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QApplication::translate("home", "Accueil", Q_NULLPTR));
        lbBienvenue->setText(QApplication::translate("home", "Bienvenue dans ce jeu de Dactylographie !", Q_NULLPTR));
        label->setText(QApplication::translate("home", "BackgroundColor", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("home", "Bleu", Q_NULLPTR)
         << QApplication::translate("home", "Vert", Q_NULLPTR)
         << QApplication::translate("home", "Jaune", Q_NULLPTR)
         << QApplication::translate("home", "Rouge", Q_NULLPTR)
         << QString()
        );
        btPlay->setText(QApplication::translate("home", "Play", Q_NULLPTR));
        btScoreboard->setText(QApplication::translate("home", "Scoreboard", Q_NULLPTR));
        btExit->setText(QApplication::translate("home", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H

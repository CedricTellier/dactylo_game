/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
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
            home->setObjectName(QString::fromUtf8("home"));
        home->resize(502, 440);
        QPalette palette;
        QBrush brush(QColor(0, 255, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        home->setPalette(palette);
        home->setFocusPolicy(Qt::NoFocus);
        centralWidget = new QWidget(home);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lbBienvenue = new QLabel(centralWidget);
        lbBienvenue->setObjectName(QString::fromUtf8("lbBienvenue"));
        lbBienvenue->setGeometry(QRect(50, 10, 371, 41));
        lbBienvenue->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbBienvenue->setAlignment(Qt::AlignCenter);
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 370, 251, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(11);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(horizontalLayoutWidget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Verdana"));
        font1.setPointSize(12);
        comboBox->setFont(font1);
        comboBox->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;}\n"
":!focus{background-color: rgb(255, 255, 255);}"));
        comboBox->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        comboBox->setIconSize(QSize(7, 30));

        horizontalLayout->addWidget(comboBox);

        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(110, 60, 261, 291));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        btPlay = new QPushButton(verticalLayoutWidget);
        btPlay->setObjectName(QString::fromUtf8("btPlay"));
        btPlay->setEnabled(true);
        btPlay->setMinimumSize(QSize(70, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Verdana"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        btPlay->setFont(font2);
        btPlay->setFocusPolicy(Qt::TabFocus);
        btPlay->setContextMenuPolicy(Qt::DefaultContextMenu);
        btPlay->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btPlay->setCheckable(false);
        btPlay->setAutoRepeatDelay(301);
        btPlay->setAutoDefault(true);
        btPlay->setFlat(false);

        verticalLayout->addWidget(btPlay);

        btScoreboard = new QPushButton(verticalLayoutWidget);
        btScoreboard->setObjectName(QString::fromUtf8("btScoreboard"));
        btScoreboard->setMinimumSize(QSize(70, 80));
        btScoreboard->setFont(font2);
        btScoreboard->setFocusPolicy(Qt::TabFocus);
        btScoreboard->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btScoreboard->setAutoDefault(true);

        verticalLayout->addWidget(btScoreboard);

        btExit = new QPushButton(verticalLayoutWidget);
        btExit->setObjectName(QString::fromUtf8("btExit"));
        btExit->setMinimumSize(QSize(70, 80));
        btExit->setFont(font2);
        btExit->setFocusPolicy(Qt::TabFocus);
        btExit->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btExit->setAutoDefault(true);

        verticalLayout->addWidget(btExit);

        home->setCentralWidget(centralWidget);
        QWidget::setTabOrder(btPlay, btScoreboard);
        QWidget::setTabOrder(btScoreboard, btExit);
        QWidget::setTabOrder(btExit, comboBox);

        retranslateUi(home);

        QMetaObject::connectSlotsByName(home);
    } // setupUi

    void retranslateUi(QMainWindow *home)
    {
        home->setWindowTitle(QApplication::translate("home", "Accueil", nullptr));
        lbBienvenue->setText(QApplication::translate("home", "Bienvenue dans ce jeu de Dactylographie !", nullptr));
        label->setText(QApplication::translate("home", "BackgroundColor", nullptr));
        comboBox->setItemText(0, QApplication::translate("home", "Bleu", nullptr));
        comboBox->setItemText(1, QApplication::translate("home", "Vert", nullptr));
        comboBox->setItemText(2, QApplication::translate("home", "Jaune", nullptr));
        comboBox->setItemText(3, QApplication::translate("home", "Rouge", nullptr));
        comboBox->setItemText(4, QString());

        btPlay->setText(QApplication::translate("home", "Play", nullptr));
        btScoreboard->setText(QApplication::translate("home", "Scoreboard", nullptr));
        btExit->setText(QApplication::translate("home", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class home: public Ui_home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H

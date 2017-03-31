/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QRadioButton *rbOff;
    QRadioButton *rbOn;
    QLabel *lbSound;
    QPushButton *btValider;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *lbBackground;
    QComboBox *comboBox;

    void setupUi(QWidget *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName(QStringLiteral("settings"));
        settings->resize(312, 270);
        gridLayoutWidget = new QWidget(settings);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        rbOff = new QRadioButton(gridLayoutWidget);
        rbOff->setObjectName(QStringLiteral("rbOff"));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        rbOff->setFont(font);
        rbOff->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;\n"
"border-radius: 10px;"));

        gridLayout->addWidget(rbOff, 1, 1, 1, 1);

        rbOn = new QRadioButton(gridLayoutWidget);
        rbOn->setObjectName(QStringLiteral("rbOn"));
        rbOn->setFont(font);
        rbOn->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;\n"
"border-radius: 10px;"));

        gridLayout->addWidget(rbOn, 0, 1, 1, 1);

        lbSound = new QLabel(gridLayoutWidget);
        lbSound->setObjectName(QStringLiteral("lbSound"));
        lbSound->setFont(font);
        lbSound->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;\n"
"border-radius: 10px;"));
        lbSound->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbSound, 0, 0, 2, 1);

        btValider = new QPushButton(settings);
        btValider->setObjectName(QStringLiteral("btValider"));
        btValider->setGeometry(QRect(160, 200, 121, 51));
        btValider->setFont(font);
        btValider->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;"));
        btValider->setLocale(QLocale(QLocale::French, QLocale::France));
        gridLayoutWidget_2 = new QWidget(settings);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(20, 100, 261, 81));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        lbBackground = new QLabel(gridLayoutWidget_2);
        lbBackground->setObjectName(QStringLiteral("lbBackground"));
        lbBackground->setFont(font);
        lbBackground->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;\n"
"border-radius: 10px;"));
        lbBackground->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lbBackground, 0, 1, 1, 1);

        comboBox = new QComboBox(gridLayoutWidget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"text-alignement: center;"));

        gridLayout_2->addWidget(comboBox, 0, 2, 1, 1);


        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QWidget *settings)
    {
        settings->setWindowTitle(QApplication::translate("settings", "Scoreboard", Q_NULLPTR));
        rbOff->setText(QApplication::translate("settings", "Off", Q_NULLPTR));
        rbOn->setText(QApplication::translate("settings", "On", Q_NULLPTR));
        lbSound->setText(QApplication::translate("settings", "Sound", Q_NULLPTR));
        btValider->setText(QApplication::translate("settings", "Valider", Q_NULLPTR));
        lbBackground->setText(QApplication::translate("settings", "Background Color", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("settings", "Bleu", Q_NULLPTR)
         << QApplication::translate("settings", "Vert", Q_NULLPTR)
         << QApplication::translate("settings", "Rouge", Q_NULLPTR)
         << QApplication::translate("settings", "Jaune", Q_NULLPTR)
         << QApplication::translate("settings", "Aucun", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H

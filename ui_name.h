/********************************************************************************
** Form generated from reading UI file 'name.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAME_H
#define UI_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Name
{
public:
    QLineEdit *lNom;
    QPushButton *btStart;

    void setupUi(QWidget *Name)
    {
        if (Name->objectName().isEmpty())
            Name->setObjectName(QStringLiteral("Name"));
        Name->resize(296, 151);
        lNom = new QLineEdit(Name);
        lNom->setObjectName(QStringLiteral("lNom"));
        lNom->setGeometry(QRect(10, 20, 271, 31));
        QFont font;
        font.setFamily(QStringLiteral("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lNom->setFont(font);
        lNom->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lNom->setAlignment(Qt::AlignCenter);
        btStart = new QPushButton(Name);
        btStart->setObjectName(QStringLiteral("btStart"));
        btStart->setGeometry(QRect(150, 70, 131, 61));
        btStart->setFont(font);
        btStart->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";"));

        retranslateUi(Name);

        QMetaObject::connectSlotsByName(Name);
    } // setupUi

    void retranslateUi(QWidget *Name)
    {
        Name->setWindowTitle(QApplication::translate("Name", "Name", Q_NULLPTR));
        lNom->setPlaceholderText(QApplication::translate("Name", "Saisissez votre nom ou pseudo", Q_NULLPTR));
        btStart->setText(QApplication::translate("Name", "Start", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Name: public Ui_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAME_H

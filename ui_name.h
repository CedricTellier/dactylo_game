/********************************************************************************
** Form generated from reading UI file 'name.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NAME_H
#define UI_NAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
            Name->setObjectName(QString::fromUtf8("Name"));
        Name->resize(296, 151);
        Name->setFocusPolicy(Qt::NoFocus);
        lNom = new QLineEdit(Name);
        lNom->setObjectName(QString::fromUtf8("lNom"));
        lNom->setGeometry(QRect(10, 20, 271, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        lNom->setFont(font);
        lNom->setFocusPolicy(Qt::TabFocus);
        lNom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lNom->setInputMethodHints(Qt::ImhNone);
        lNom->setMaxLength(20);
        lNom->setFrame(true);
        lNom->setAlignment(Qt::AlignCenter);
        btStart = new QPushButton(Name);
        btStart->setObjectName(QString::fromUtf8("btStart"));
        btStart->setGeometry(QRect(150, 70, 131, 61));
        btStart->setFont(font);
        btStart->setFocusPolicy(Qt::TabFocus);
        btStart->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btStart->setAutoDefault(true);

        retranslateUi(Name);

        QMetaObject::connectSlotsByName(Name);
    } // setupUi

    void retranslateUi(QWidget *Name)
    {
        Name->setWindowTitle(QApplication::translate("Name", "Name", nullptr));
        lNom->setPlaceholderText(QApplication::translate("Name", "Saisissez votre nom ou pseudo", nullptr));
        btStart->setText(QApplication::translate("Name", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Name: public Ui_Name {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NAME_H

/********************************************************************************
** Form generated from reading UI file 'confirmation.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMATION_H
#define UI_CONFIRMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmation
{
public:
    QPushButton *btOk;
    QPushButton *btAnnuler;
    QLabel *label;

    void setupUi(QWidget *confirmation)
    {
        if (confirmation->objectName().isEmpty())
            confirmation->setObjectName(QString::fromUtf8("confirmation"));
        confirmation->resize(461, 191);
        confirmation->setFocusPolicy(Qt::NoFocus);
        btOk = new QPushButton(confirmation);
        btOk->setObjectName(QString::fromUtf8("btOk"));
        btOk->setGeometry(QRect(240, 90, 171, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Verdana"));
        font.setPointSize(12);
        btOk->setFont(font);
        btOk->setFocusPolicy(Qt::TabFocus);
        btOk->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px}"));
        btOk->setAutoDefault(true);
        btAnnuler = new QPushButton(confirmation);
        btAnnuler->setObjectName(QString::fromUtf8("btAnnuler"));
        btAnnuler->setGeometry(QRect(30, 90, 171, 71));
        btAnnuler->setFont(font);
        btAnnuler->setFocusPolicy(Qt::TabFocus);
        btAnnuler->setStyleSheet(QString::fromUtf8(":focus {background-color:#CECECE;border-radius:10px;outline:none;font :bold;}\n"
":!focus{background-color: rgb(255, 255, 255);border-radius:10px;}\n"
""));
        btAnnuler->setAutoDefault(true);
        label = new QLabel(confirmation);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 401, 51));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("background-color: white;\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(confirmation);

        QMetaObject::connectSlotsByName(confirmation);
    } // setupUi

    void retranslateUi(QWidget *confirmation)
    {
        confirmation->setWindowTitle(QApplication::translate("confirmation", "Form", nullptr));
        btOk->setText(QApplication::translate("confirmation", "Valider", nullptr));
        btAnnuler->setText(QApplication::translate("confirmation", "Annuler", nullptr));
        label->setText(QApplication::translate("confirmation", "Etes-vous s\303\273r de vouloir supprimer les scores ?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmation: public Ui_confirmation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMATION_H

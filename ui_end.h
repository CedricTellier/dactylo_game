/********************************************************************************
** Form generated from reading UI file 'end.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_END_H
#define UI_END_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_end
{
public:
    QPushButton *btRestart;
    QPushButton *btQuit;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *lbScore;
    QLabel *lbRNbScore;
    QLabel *lbRNomJoueur;
    QLabel *label;

    void setupUi(QWidget *end)
    {
        if (end->objectName().isEmpty())
            end->setObjectName(QStringLiteral("end"));
        end->resize(461, 276);
        QFont font;
        font.setFamily(QStringLiteral("Candara"));
        font.setPointSize(12);
        end->setFont(font);
        btRestart = new QPushButton(end);
        btRestart->setObjectName(QStringLiteral("btRestart"));
        btRestart->setGeometry(QRect(40, 190, 171, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Verdana"));
        btRestart->setFont(font1);
        btQuit = new QPushButton(end);
        btQuit->setObjectName(QStringLiteral("btQuit"));
        btQuit->setGeometry(QRect(250, 190, 171, 61));
        btQuit->setFont(font1);
        gridLayoutWidget = new QWidget(end);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 90, 141, 81));
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

        lbRNbScore = new QLabel(gridLayoutWidget);
        lbRNbScore->setObjectName(QStringLiteral("lbRNbScore"));
        lbRNbScore->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbRNbScore->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbRNbScore, 1, 2, 1, 1);

        lbRNomJoueur = new QLabel(gridLayoutWidget);
        lbRNomJoueur->setObjectName(QStringLiteral("lbRNomJoueur"));
        lbRNomJoueur->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        lbRNomJoueur->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbRNomJoueur, 0, 1, 1, 2);

        label = new QLabel(end);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 411, 41));
        label->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"font:12pt \"Verdana\";\n"
"border-radius: 10px;"));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(end);

        QMetaObject::connectSlotsByName(end);
    } // setupUi

    void retranslateUi(QWidget *end)
    {
        end->setWindowTitle(QApplication::translate("end", "Form", Q_NULLPTR));
        btRestart->setText(QApplication::translate("end", "Restart", Q_NULLPTR));
        btQuit->setText(QApplication::translate("end", "Exit", Q_NULLPTR));
        lbScore->setText(QApplication::translate("end", "Score", Q_NULLPTR));
        lbRNbScore->setText(QString());
        lbRNomJoueur->setText(QString());
        label->setText(QApplication::translate("end", "Dommage, vous venez de perdre!\n"
" Allez encore un effort,  vous pouvez faire mieux!", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class end: public Ui_end {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_END_H

/********************************************************************************
** Form generated from reading UI file 'vehiculeui.ui'
**
** Created by: Qt User Interface Compiler version 6.2.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICULEUI_H
#define UI_VEHICULEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vehiculeUI
{
public:
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *nums;
    QLineEdit *numc;
    QDateEdit *dateEdit;
    QLineEdit *km;
    QLineEdit *tel;
    QLineEdit *modele;
    QLineEdit *marque;
    QLineEdit *nom;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QPushButton *ajouter;
    QPushButton *editer;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_supp;
    QPushButton *supp;

    void setupUi(QDialog *vehiculeUI)
    {
        if (vehiculeUI->objectName().isEmpty())
            vehiculeUI->setObjectName(QString::fromUtf8("vehiculeUI"));
        vehiculeUI->resize(1039, 416);
        tableView = new QTableView(vehiculeUI);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(210, 60, 811, 291));
        widget = new QWidget(vehiculeUI);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 60, 171, 291));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nums = new QLineEdit(widget);
        nums->setObjectName(QString::fromUtf8("nums"));

        verticalLayout->addWidget(nums);

        numc = new QLineEdit(widget);
        numc->setObjectName(QString::fromUtf8("numc"));

        verticalLayout->addWidget(numc);

        dateEdit = new QDateEdit(widget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));

        verticalLayout->addWidget(dateEdit);

        km = new QLineEdit(widget);
        km->setObjectName(QString::fromUtf8("km"));

        verticalLayout->addWidget(km);

        tel = new QLineEdit(widget);
        tel->setObjectName(QString::fromUtf8("tel"));

        verticalLayout->addWidget(tel);

        modele = new QLineEdit(widget);
        modele->setObjectName(QString::fromUtf8("modele"));

        verticalLayout->addWidget(modele);

        marque = new QLineEdit(widget);
        marque->setObjectName(QString::fromUtf8("marque"));

        verticalLayout->addWidget(marque);

        nom = new QLineEdit(widget);
        nom->setObjectName(QString::fromUtf8("nom"));

        verticalLayout->addWidget(nom);

        widget1 = new QWidget(vehiculeUI);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 360, 171, 26));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ajouter = new QPushButton(widget1);
        ajouter->setObjectName(QString::fromUtf8("ajouter"));

        horizontalLayout->addWidget(ajouter);

        editer = new QPushButton(widget1);
        editer->setObjectName(QString::fromUtf8("editer"));

        horizontalLayout->addWidget(editer);

        widget2 = new QWidget(vehiculeUI);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(770, 360, 241, 26));
        horizontalLayout_2 = new QHBoxLayout(widget2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_supp = new QLineEdit(widget2);
        lineEdit_supp->setObjectName(QString::fromUtf8("lineEdit_supp"));

        horizontalLayout_2->addWidget(lineEdit_supp);

        supp = new QPushButton(widget2);
        supp->setObjectName(QString::fromUtf8("supp"));

        horizontalLayout_2->addWidget(supp);


        retranslateUi(vehiculeUI);

        QMetaObject::connectSlotsByName(vehiculeUI);
    } // setupUi

    void retranslateUi(QDialog *vehiculeUI)
    {
        vehiculeUI->setWindowTitle(QCoreApplication::translate("vehiculeUI", "Dialog", nullptr));
        nums->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "nums", nullptr));
        numc->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "numc", nullptr));
        km->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "km", nullptr));
        tel->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "tel", nullptr));
        modele->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "modele", nullptr));
        marque->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "marque", nullptr));
        nom->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "nom", nullptr));
        ajouter->setText(QCoreApplication::translate("vehiculeUI", "Ajouter", nullptr));
        editer->setText(QCoreApplication::translate("vehiculeUI", "Editer", nullptr));
        lineEdit_supp->setPlaceholderText(QCoreApplication::translate("vehiculeUI", "Supprimer", nullptr));
        supp->setText(QCoreApplication::translate("vehiculeUI", "Supprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vehiculeUI: public Ui_vehiculeUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICULEUI_H

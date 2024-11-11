#include "vehiculeui.h"
#include "ui_vehiculeui.h"

#include <QMessageBox>

vehiculeUI::vehiculeUI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::vehiculeUI)
{
    ui->setupUi(this);
}

vehiculeUI::~vehiculeUI()
{
    delete ui;
}

void vehiculeUI::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);
    ui->tableView->setModel(v.afficher());
}


void vehiculeUI::on_ajouter_clicked()
{
    int nums = ui->nums->text().toInt();
    int numc = ui->numc->text().toInt();
    QDate datea = ui->dateEdit->date();
    float km = ui->km->text().toFloat();
    int tel = ui->tel->text().toInt();
    QString modele = ui->modele->text();
    QString marque = ui->marque->text();
    QString nom = ui->nom->text();

    vehicule v(nums, numc, tel,datea, km, modele, marque, nom);

    bool test = v.Ajouter();
    if(test) {
        ui->tableView->setModel(v.afficher());
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Error !!"),
                              QObject::tr("Cannot add vehicle."), QMessageBox::Cancel);
    }

}


void vehiculeUI::on_editer_clicked()
{
    int nums = ui->nums->text().toInt();
    int numc = ui->numc->text().toInt();
    QDate datea = ui->dateEdit->date();
    float km = ui->km->text().toFloat();
    int tel = ui->tel->text().toInt();
    QString modele = ui->modele->text();
    QString marque = ui->marque->text();
    QString nom = ui->nom->text();

    vehicule v(nums, numc, tel,datea, km, modele, marque, nom);

    bool test = v.modifier();
    if(test) {
        ui->tableView->setModel(v.afficher());
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Error !!"),
                              QObject::tr("Cannot edit vehicle."), QMessageBox::Cancel);
    }
}


void vehiculeUI::on_supp_clicked()
{
    vehicule v1;
    v1.setNumc(ui->lineEdit_supp->text().toInt());
    v1.Supprimer(v1.getNumc());
    ui->tableView->setModel(v.afficher());
}


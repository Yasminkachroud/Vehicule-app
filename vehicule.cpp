#include "vehicule.h"
#include <QSqlQuery>
#include <QSqlQueryModel>

vehicule::vehicule() {
    nums = 0;
    numc = 0;
    numtel = 0;
    km = 0.0f;
    model = "";
    marque = "";
    nom = "";
    datea = QDate();
}

vehicule::vehicule(int Nums, int Numc, int NumTel, QDate DateA, float Km, QString Model, QString Marque, QString Nom) {
    nums = Nums;
    numc = Numc;
    numtel = NumTel;
    datea = DateA;
    km = Km;
    model = Model;
    marque = Marque;
    nom = Nom;
}

// Getters
int vehicule::getNums() {
    return nums;
}

int vehicule::getNumc() {
    return numc;
}

int vehicule::getNumTel() {
    return numtel;
}

QDate vehicule::getDate() {
    return datea;
}

float vehicule::getKm() {
    return km;
}

QString vehicule::getModel() {
    return model;
}

QString vehicule::getMarque() {
    return marque;
}

QString vehicule::getNom() {
    return nom;
}

// Setters
void vehicule::setNums(int Nums) {
    nums = Nums;
}

void vehicule::setNumc(int Numc) {
    numc = Numc;
}

void vehicule::setNumTel(int NumTel) {
    numtel = NumTel;
}

void vehicule::setDate(QDate DateA) {
    datea = DateA;
}

void vehicule::setKm(float Km) {
    km = Km;
}

void vehicule::setModel(QString Model) {
    model = Model;
}

void vehicule::setMarque(QString Marque) {
    marque = Marque;
}

void vehicule::setNom(QString Nom) {
    nom = Nom;
}

// CRUD Operations

// Create
bool vehicule::Ajouter() {
    QSqlQuery query;

    query.prepare("INSERT INTO vehicule (nums, numc, numtel, datea, km, model, marque, nom) "
                  "VALUES (:nums, :numc, :numtel, :datea, :km, :model, :marque, :nom)");

    query.bindValue(":nums", nums);
    query.bindValue(":numc", numc);
    query.bindValue(":numtel", numtel);
    query.bindValue(":datea", datea);
    query.bindValue(":km", km);
    query.bindValue(":model", model);
    query.bindValue(":marque", marque);
    query.bindValue(":nom", nom);

    return query.exec();
}

// Display
QSqlQueryModel* vehicule::afficher() {
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT nums, numc, TO_CHAR(numtel) AS numtel, TO_CHAR(datea, 'DD-MM-YYYY') AS datea, TO_CHAR(km, 'FM99999999.00') AS km, model, marque, nom FROM vehicule");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numéro du véhicule"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numéro de châssis"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Numéro de téléphone"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Date d'entrée"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Kilométrage"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Modèle"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Marque"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Nom"));

    return model;
}

// Update
bool vehicule::modifier() {
    QSqlQuery query;

    query.prepare("UPDATE vehicule SET numc = :numc, numtel = :numtel, datea = :datea, km = :km, "
                  "model = :model, marque = :marque, nom = :nom WHERE nums = :nums");

    query.bindValue(":numc", numc);
    query.bindValue(":numtel", numtel);
    query.bindValue(":datea", datea);
    query.bindValue(":km", km);
    query.bindValue(":model", model);
    query.bindValue(":marque", marque);
    query.bindValue(":nom", nom);
    query.bindValue(":nums", nums);

    return query.exec();
}

// Delete
bool vehicule::Supprimer(int nums) {
    QSqlQuery query;
    query.prepare("DELETE FROM vehicule WHERE nums = :nums");
    query.bindValue(":nums", nums);
    return query.exec();
}

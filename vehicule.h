#ifndef VEHICULE_H
#define VEHICULE_H

#include <QString>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>

class vehicule
{
private:
    int nums, numc, numtel;
    QDate datea;
    float km;
    QString model, marque, nom;

public:
    vehicule();
    vehicule(int Nums, int Numc, int NumTel, QDate Datea, float Km, QString Model, QString Marque, QString Nom);

    // Getters
    int getNums();
    int getNumc();
    int getNumTel();
    QDate getDate();
    float getKm();
    QString getModel();
    QString getMarque();
    QString getNom();

    // Setters
    void setNums(int nums);
    void setNumc(int numc);
    void setNumTel(int numtel);
    void setDate(QDate date);
    void setKm(float km);
    void setModel(QString model);
    void setMarque(QString marque);
    void setNom(QString nom);

    bool Ajouter();
    QSqlQueryModel* afficher();
    bool Supprimer(int nums);
    bool modifier();
};

#endif // VEHICULE_H

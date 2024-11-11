#ifndef VEHICULEUI_H
#define VEHICULEUI_H

#include <QDialog>

#include "vehicule.h"

namespace Ui {
class vehiculeUI;
}

class vehiculeUI : public QDialog
{
    Q_OBJECT

public:
    explicit vehiculeUI(QWidget *parent = nullptr);
    ~vehiculeUI();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_ajouter_clicked();

    void on_editer_clicked();

    void on_supp_clicked();

private:
    Ui::vehiculeUI *ui;
    vehicule v;
};

#endif // VEHICULEUI_H

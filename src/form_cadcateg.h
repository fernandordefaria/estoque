#ifndef FORM_CADCATEG_H
#define FORM_CADCATEG_H

#include <QDialog>
#include "dao/categdao.h"

namespace Ui {
class Form_CadCateg;
}

class Form_CadCateg : public QDialog{
    Q_OBJECT
public:
    explicit Form_CadCateg(QWidget *parent = 0);
    ~Form_CadCateg();
private slots:
    void on_btnCancel_clicked();
    void on_btnCad_clicked();
private:
    Ui::Form_CadCateg *ui;
    CategDao *categDao;
};

#endif // FORM_CADCATEG_H

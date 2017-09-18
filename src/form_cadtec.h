#ifndef FORM_CADTEC_H
#define FORM_CADTEC_H

#include <QDialog>
#include <QSqlQuery>
#include <QSqlError>
#include <QKeyEvent>

namespace Ui {
class Form_CadTec;
}

class Form_CadTec : public QDialog{
    Q_OBJECT
public:
    explicit Form_CadTec(QWidget *parent = 0);
    void setSignals();
    void validator();
    ~Form_CadTec();
    void keyPressEvent(QKeyEvent *e);
private slots:
    void cadastrar();
private:
    Ui::Form_CadTec *ui;
    QSqlQuery *q;
};

#endif // FORM_CADTEC_H

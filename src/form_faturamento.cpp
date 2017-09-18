#include "form_faturamento.h"

Form_Faturamento::Form_Faturamento(QWidget *parent) : Base_Form(parent){
    this->btnCad->setVisible(true);
    this->btnEdit->setVisible(true);
    this->btnDel->setVisible(true);
}

void Form_Faturamento::setSignals(){
    //connect(this->);
}

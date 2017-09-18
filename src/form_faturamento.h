#ifndef FORM_FATURAMENTO_H
#define FORM_FATURAMENTO_H

#include "base_form.h"

class Form_Faturamento : public Base_Form{
public:
    explicit Form_Faturamento(QWidget *parent = 0);
    void setSignals();
};

#endif // FORM_FATURAMENTO_H

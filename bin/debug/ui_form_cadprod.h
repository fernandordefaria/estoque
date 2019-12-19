/********************************************************************************
** Form generated from reading UI file 'form_cadprod.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADPROD_H
#define UI_FORM_CADPROD_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Form_CadProd
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QLineEdit *edtCod;
    QLineEdit *edtDesc;
    QLineEdit *edtUnidade;
    QLineEdit *edtValorCompra;
    QLineEdit *edtValorVenda;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCad;
    QPushButton *btnSair;

    void setupUi(QDialog *Form_CadProd)
    {
        if (Form_CadProd->objectName().isEmpty())
            Form_CadProd->setObjectName(QString::fromUtf8("Form_CadProd"));
        Form_CadProd->resize(512, 314);
        verticalLayout_2 = new QVBoxLayout(Form_CadProd);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame = new QFrame(Form_CadProd);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 2);

        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 8, 0, 1, 2);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 2);

        edtCod = new QLineEdit(frame);
        edtCod->setObjectName(QString::fromUtf8("edtCod"));
        edtCod->setFocusPolicy(Qt::StrongFocus);

        gridLayout->addWidget(edtCod, 1, 0, 1, 3);

        edtDesc = new QLineEdit(frame);
        edtDesc->setObjectName(QString::fromUtf8("edtDesc"));

        gridLayout->addWidget(edtDesc, 3, 0, 1, 3);

        edtUnidade = new QLineEdit(frame);
        edtUnidade->setObjectName(QString::fromUtf8("edtUnidade"));

        gridLayout->addWidget(edtUnidade, 5, 0, 1, 3);

        edtValorCompra = new QLineEdit(frame);
        edtValorCompra->setObjectName(QString::fromUtf8("edtValorCompra"));

        gridLayout->addWidget(edtValorCompra, 9, 0, 1, 3);

        edtValorVenda = new QLineEdit(frame);
        edtValorVenda->setObjectName(QString::fromUtf8("edtValorVenda"));

        gridLayout->addWidget(edtValorVenda, 11, 0, 1, 3);


        verticalLayout_2->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCad = new QPushButton(Form_CadProd);
        btnCad->setObjectName(QString::fromUtf8("btnCad"));
        btnCad->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCad->setIcon(icon);

        horizontalLayout->addWidget(btnCad);

        btnSair = new QPushButton(Form_CadProd);
        btnSair->setObjectName(QString::fromUtf8("btnSair"));
        btnSair->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSair->setIcon(icon1);

        horizontalLayout->addWidget(btnSair);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Form_CadProd);

        QMetaObject::connectSlotsByName(Form_CadProd);
    } // setupUi

    void retranslateUi(QDialog *Form_CadProd)
    {
        Form_CadProd->setWindowTitle(QCoreApplication::translate("Form_CadProd", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("Form_CadProd", "Valor de Venda", nullptr));
        label_3->setText(QCoreApplication::translate("Form_CadProd", "C\303\263digo de Barras", nullptr));
        label->setText(QCoreApplication::translate("Form_CadProd", "descricao", nullptr));
        label_4->setText(QCoreApplication::translate("Form_CadProd", "Valor de Compra", nullptr));
        label_2->setText(QCoreApplication::translate("Form_CadProd", "Unidade", nullptr));
        btnCad->setText(QCoreApplication::translate("Form_CadProd", "Cadastrar", nullptr));
        btnSair->setText(QCoreApplication::translate("Form_CadProd", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_CadProd: public Ui_Form_CadProd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADPROD_H

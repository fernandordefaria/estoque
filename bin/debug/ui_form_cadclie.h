/********************************************************************************
** Form generated from reading UI file 'form_cadclie.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADCLIE_H
#define UI_FORM_CADCLIE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Form_CadClie
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *edtSobre;
    QLabel *label_6;
    QLineEdit *edtEmail;
    QLabel *label_3;
    QLineEdit *edtEnd;
    QLabel *label_4;
    QLineEdit *edtTel;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *edtNome;
    QLabel *label_5;
    QLineEdit *edtCpf;
    QLabel *label_7;
    QComboBox *cbSexo;
    QLabel *label_8;
    QDateEdit *edtData;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCad;
    QPushButton *btnSair;

    void setupUi(QDialog *Form_CadClie)
    {
        if (Form_CadClie->objectName().isEmpty())
            Form_CadClie->setObjectName(QString::fromUtf8("Form_CadClie"));
        Form_CadClie->resize(638, 266);
        Form_CadClie->setModal(false);
        gridLayout = new QGridLayout(Form_CadClie);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(Form_CadClie);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);

        verticalLayout_2->addWidget(label_2);

        edtSobre = new QLineEdit(Form_CadClie);
        edtSobre->setObjectName(QString::fromUtf8("edtSobre"));

        verticalLayout_2->addWidget(edtSobre);

        label_6 = new QLabel(Form_CadClie);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        edtEmail = new QLineEdit(Form_CadClie);
        edtEmail->setObjectName(QString::fromUtf8("edtEmail"));

        verticalLayout_2->addWidget(edtEmail);

        label_3 = new QLabel(Form_CadClie);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        edtEnd = new QLineEdit(Form_CadClie);
        edtEnd->setObjectName(QString::fromUtf8("edtEnd"));

        verticalLayout_2->addWidget(edtEnd);

        label_4 = new QLabel(Form_CadClie);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        verticalLayout_2->addWidget(label_4);

        edtTel = new QLineEdit(Form_CadClie);
        edtTel->setObjectName(QString::fromUtf8("edtTel"));

        verticalLayout_2->addWidget(edtTel);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Form_CadClie);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout->addWidget(label);

        edtNome = new QLineEdit(Form_CadClie);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        verticalLayout->addWidget(edtNome);

        label_5 = new QLabel(Form_CadClie);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        edtCpf = new QLineEdit(Form_CadClie);
        edtCpf->setObjectName(QString::fromUtf8("edtCpf"));

        verticalLayout->addWidget(edtCpf);

        label_7 = new QLabel(Form_CadClie);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout->addWidget(label_7);

        cbSexo = new QComboBox(Form_CadClie);
        cbSexo->addItem(QString());
        cbSexo->addItem(QString());
        cbSexo->setObjectName(QString::fromUtf8("cbSexo"));

        verticalLayout->addWidget(cbSexo);

        label_8 = new QLabel(Form_CadClie);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout->addWidget(label_8);

        edtData = new QDateEdit(Form_CadClie);
        edtData->setObjectName(QString::fromUtf8("edtData"));

        verticalLayout->addWidget(edtData);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCad = new QPushButton(Form_CadClie);
        btnCad->setObjectName(QString::fromUtf8("btnCad"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCad->setIcon(icon);

        horizontalLayout->addWidget(btnCad);

        btnSair = new QPushButton(Form_CadClie);
        btnSair->setObjectName(QString::fromUtf8("btnSair"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSair->setIcon(icon1);

        horizontalLayout->addWidget(btnSair);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);


        retranslateUi(Form_CadClie);

        QMetaObject::connectSlotsByName(Form_CadClie);
    } // setupUi

    void retranslateUi(QDialog *Form_CadClie)
    {
        Form_CadClie->setWindowTitle(QCoreApplication::translate("Form_CadClie", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Form_CadClie", "Sobrenome:", nullptr));
        label_6->setText(QCoreApplication::translate("Form_CadClie", "Email", nullptr));
        label_3->setText(QCoreApplication::translate("Form_CadClie", "Endere\303\247o", nullptr));
        label_4->setText(QCoreApplication::translate("Form_CadClie", "Telefone:", nullptr));
        edtTel->setInputMask(QString());
        label->setText(QCoreApplication::translate("Form_CadClie", "Nome:", nullptr));
        label_5->setText(QCoreApplication::translate("Form_CadClie", "CPF:", nullptr));
        edtCpf->setInputMask(QString());
        label_7->setText(QCoreApplication::translate("Form_CadClie", "Sexo:", nullptr));
        cbSexo->setItemText(0, QCoreApplication::translate("Form_CadClie", "Masculino", nullptr));
        cbSexo->setItemText(1, QCoreApplication::translate("Form_CadClie", "Feminino", nullptr));

        label_8->setText(QCoreApplication::translate("Form_CadClie", "Nascimento:", nullptr));
        edtData->setDisplayFormat(QCoreApplication::translate("Form_CadClie", "dd/MM/yyyy", nullptr));
        btnCad->setText(QCoreApplication::translate("Form_CadClie", "Cadastrar", nullptr));
        btnSair->setText(QCoreApplication::translate("Form_CadClie", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form_CadClie: public Ui_Form_CadClie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADCLIE_H

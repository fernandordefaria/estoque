/********************************************************************************
** Form generated from reading UI file 'form_caduser.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CADUSER_H
#define UI_FORM_CADUSER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_form_cadUser
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *edtNome;
    QLabel *label_3;
    QLineEdit *edtSenha;
    QLabel *label_4;
    QLineEdit *edtRepetSenha;
    QLabel *label_5;
    QComboBox *cbTipo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnCad;
    QPushButton *btnSair;

    void setupUi(QDialog *form_cadUser)
    {
        if (form_cadUser->objectName().isEmpty())
            form_cadUser->setObjectName(QString::fromUtf8("form_cadUser"));
        form_cadUser->resize(565, 275);
        verticalLayout_2 = new QVBoxLayout(form_cadUser);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(form_cadUser);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(form_cadUser);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edtNome = new QLineEdit(form_cadUser);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        verticalLayout->addWidget(edtNome);

        label_3 = new QLabel(form_cadUser);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        edtSenha = new QLineEdit(form_cadUser);
        edtSenha->setObjectName(QString::fromUtf8("edtSenha"));
        edtSenha->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(edtSenha);

        label_4 = new QLabel(form_cadUser);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        edtRepetSenha = new QLineEdit(form_cadUser);
        edtRepetSenha->setObjectName(QString::fromUtf8("edtRepetSenha"));
        edtRepetSenha->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(edtRepetSenha);

        label_5 = new QLabel(form_cadUser);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        cbTipo = new QComboBox(form_cadUser);
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->addItem(QString());
        cbTipo->setObjectName(QString::fromUtf8("cbTipo"));

        verticalLayout->addWidget(cbTipo);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnCad = new QPushButton(form_cadUser);
        btnCad->setObjectName(QString::fromUtf8("btnCad"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCad->setIcon(icon);

        horizontalLayout->addWidget(btnCad);

        btnSair = new QPushButton(form_cadUser);
        btnSair->setObjectName(QString::fromUtf8("btnSair"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSair->setIcon(icon1);

        horizontalLayout->addWidget(btnSair);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(form_cadUser);

        QMetaObject::connectSlotsByName(form_cadUser);
    } // setupUi

    void retranslateUi(QDialog *form_cadUser)
    {
        form_cadUser->setWindowTitle(QCoreApplication::translate("form_cadUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("form_cadUser", "Cadastro de Usu\303\241rios", nullptr));
        label_2->setText(QCoreApplication::translate("form_cadUser", "Nome:", nullptr));
        label_3->setText(QCoreApplication::translate("form_cadUser", "Senha:", nullptr));
        label_4->setText(QCoreApplication::translate("form_cadUser", "Repetir Senha:", nullptr));
        label_5->setText(QCoreApplication::translate("form_cadUser", "Tipo de usu\303\241rio", nullptr));
        cbTipo->setItemText(0, QCoreApplication::translate("form_cadUser", "admin", nullptr));
        cbTipo->setItemText(1, QCoreApplication::translate("form_cadUser", "tecnico", nullptr));
        cbTipo->setItemText(2, QCoreApplication::translate("form_cadUser", "user", nullptr));

        btnCad->setText(QCoreApplication::translate("form_cadUser", "Cadastrar", nullptr));
        btnSair->setText(QCoreApplication::translate("form_cadUser", "Encerrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class form_cadUser: public Ui_form_cadUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CADUSER_H

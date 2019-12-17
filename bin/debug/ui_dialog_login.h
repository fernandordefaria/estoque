/********************************************************************************
** Form generated from reading UI file 'dialog_login.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LOGIN_H
#define UI_DIALOG_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog_Login
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *edtNome;
    QLabel *label_3;
    QLineEdit *edtSenha;
    QCheckBox *checkBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnEntrar;
    QPushButton *btnCancelar;

    void setupUi(QDialog *Dialog_Login)
    {
        if (Dialog_Login->objectName().isEmpty())
            Dialog_Login->setObjectName(QString::fromUtf8("Dialog_Login"));
        Dialog_Login->setWindowModality(Qt::WindowModal);
        Dialog_Login->resize(453, 213);
        Dialog_Login->setModal(true);
        verticalLayout_2 = new QVBoxLayout(Dialog_Login);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(Dialog_Login);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(Dialog_Login);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edtNome = new QLineEdit(Dialog_Login);
        edtNome->setObjectName(QString::fromUtf8("edtNome"));

        verticalLayout->addWidget(edtNome);

        label_3 = new QLabel(Dialog_Login);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        edtSenha = new QLineEdit(Dialog_Login);
        edtSenha->setObjectName(QString::fromUtf8("edtSenha"));
        edtSenha->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(edtSenha);

        checkBox = new QCheckBox(Dialog_Login);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnEntrar = new QPushButton(Dialog_Login);
        btnEntrar->setObjectName(QString::fromUtf8("btnEntrar"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagens/icons/1493238513_Check.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnEntrar->setIcon(icon);

        horizontalLayout->addWidget(btnEntrar);

        btnCancelar = new QPushButton(Dialog_Login);
        btnCancelar->setObjectName(QString::fromUtf8("btnCancelar"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/imagens/icons/1493332785_button_cancel.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancelar->setIcon(icon1);

        horizontalLayout->addWidget(btnCancelar);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Dialog_Login);

        QMetaObject::connectSlotsByName(Dialog_Login);
    } // setupUi

    void retranslateUi(QDialog *Dialog_Login)
    {
        Dialog_Login->setWindowTitle(QCoreApplication::translate("Dialog_Login", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog_Login", "Login do Sistema", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog_Login", "Usu\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog_Login", "Senha", nullptr));
        checkBox->setText(QCoreApplication::translate("Dialog_Login", "Lembra da Senha", nullptr));
        btnEntrar->setText(QCoreApplication::translate("Dialog_Login", "Entrar", nullptr));
        btnCancelar->setText(QCoreApplication::translate("Dialog_Login", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog_Login: public Ui_Dialog_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LOGIN_H

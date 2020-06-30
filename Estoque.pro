#-------------------------------------------------
#
# Project created by QtCreator 2017-04-24T22:29:37
#
#-------------------------------------------------

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 5): QT += widgets

TARGET = Estoque
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += src/main.cpp\
        src/mainmenu.cpp \
    src/dialog_login.cpp \
    src/login.cpp \
    src/form_cadclie.cpp \
    src/connection.cpp \
    src/form_cadprod.cpp \
    src/form_caduser.cpp \
    src/log.cpp \
    src/form_cados.cpp \
    src/form_cadtec.cpp \
    src/mvc/login.cpp \
    src/utils/permissao.cpp \
    src/produtos.cpp \
    src/base_form.cpp \
    src/form_users.cpp \
    src/form_tecnico.cpp \
    src/form_os.cpp \
    src/form_produtos.cpp \
    src/table.cpp \
    src/form_clie.cpp \
    src/systemutils.cpp \
    src/utils/exceptionsql.cpp \
    src/form_faturamento.cpp \
    src/system/tablemodel.cpp \
    src/form_categ.cpp \
    src/form_cadcateg.cpp \
    src/model/categmodal.cpp \
    src/dao/categdao.cpp \
    src/model/produtosmodal.cpp \
    src/dao/produtosdao.cpp \
    src/report/reportos.cpp \
    src/dao/vendasdao.cpp

HEADERS  += src/mainmenu.h \
    src/login.h \
    src/connection.h \
    src/form_cadclie.h \
    src/form_cadprod.h \
    src/form_caduser.h \
    src/log.h \
    src/form_cados.h \
    src/form_cadtec.h \
    src/mvc/login.h \
    src/utils/permissao.h \
    src/datedelegate.h \
    src/dialog_login.h \
    src/produtos.h \
    src/base_form.h \
    src/form_users.h \
    src/form_tecnico.h \
    src/form_os.h \
    src/form_produtos.h \
    src/table.h \
    src/form_clie.h \
    src/systemutils.h \
    src/utils/exceptionsql.h \
    src/form_faturamento.h \
    src/utils/constantes.h \
    src/system/tablemodel.h \
    src/form_categ.h \
    src/form_cadcateg.h \
    src/model/categmodal.h \
    src/dao/categdao.h \
    src/utils/property.h \
    src/model/produtosmodal.h \
    src/dao/produtosdao.h \
    src/report/reportos.h \
    src/dao/vendasdao.h

FORMS    += forms/mainmenu.ui \
    forms/dialog_login.ui \
    forms/form_cadclie.ui \
    forms/form_cadprod.ui \
    forms/form_caduser.ui \
    forms/form_cadtec.ui \
    forms/form_cados \
    forms/form_cadcateg.ui

INCLUDEPATH += $$PWD/lib
DEPENDPATH += $$PWD/lib

RESOURCES += \
    resource/icons.qrc \
    resource/report.qrc

DISTFILES +=

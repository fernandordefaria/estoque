#include "CheckBoxItemDelegate.h"
#include <QPainter>

CheckBoxItemDelegate::CheckBoxItemDelegate(QObject* parent) : QItemDelegate(parent) {
    //
}

QWidget* CheckBoxItemDelegate::createEditor(QWidget* parent, const QStyleOptionViewItem& option, const QModelIndex& index) const {
    QCheckBox *checkBox = new QCheckBox(parent);
    checkBox->setChecked(false);
    return checkBox;
}

void CheckBoxItemDelegate::setEditorData(QWidget* editor, const QModelIndex& index) const {
    bool value = index.model()->data(index, Qt::EditRole).toBool();
    QCheckBox *checkBox = static_cast<QCheckBox*>(editor);
    checkBox->setCheckable(false);
}

void CheckBoxItemDelegate::setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex& index) const {
    QCheckBox *checkBox = static_cast<QCheckBox*>(editor);
    checkBox->setCheckable(false);
}

CheckBoxItemDelegate::~CheckBoxItemDelegate() {
    //
}



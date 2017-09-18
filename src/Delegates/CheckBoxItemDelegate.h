#ifndef CHECKBOXITEMDELEGATE_H
#define CHECKBOXITEMDELEGATE_H

#include <QItemDelegate>
#include <QCheckBox>

class CheckBoxItemDelegate : public QItemDelegate{
public:
    
    explicit CheckBoxItemDelegate(QObject *parent = 0);

    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;
    
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const override;
    
    ~CheckBoxItemDelegate();
private:
};

#endif /* CHECKBOXITEMDELEGATE_H */


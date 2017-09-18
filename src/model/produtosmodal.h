#ifndef PRODUTOSMODAL_H
#define PRODUTOSMODAL_H

#include <QObject>
#include <QString>

class ProdutosModal{
public:
    ProdutosModal();
    QString getNome() const;
    void setNome(const QString &value);

    QString getMarca() const;
    void setMarca(const QString &value);

    QString getModelo() const;
    void setModelo(const QString &value);

    float getValor() const;
    void setValor(float value);

    int getQuant() const;
    void setQuant(int value);

    int getCateg() const;
    void setCateg(int value);

private:
    QString nome;
    QString marca;
    QString modelo;
    float valor;
    int quant;
    int categ;
};

#endif // PRODUTOSMODAL_H

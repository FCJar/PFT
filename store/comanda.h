#ifndef COMANDA_H
#define COMANDA_H

#include <string>
#include "produto.h"
#include <vector>
#include <QString>

class Comanda
{
private:
    int _Id,_IdAtendente;
    double _PrecoTotal, _TaxaLucro;
    QString _NomeCliente, _NumeroCartao;
    std::string _FormaPagamento, _DataVenda, _Endereco;
    std::vector<Produto*> _Produtos;
public:
    Comanda();
    // setters
    void setTotal(float Total);
    void setNumeroCartao(QString NumeroCartao);
    void setNomeCliente(QString NomeCliente);
    void setId();
    void setIdAtendente();
    void setFormaPaga(std::string fp);
    void getAdcionarProduto(Produto* p);
    void imprimirInfoComanda();
    // getters
    int getId();
    int getIdAtendente();
    double getPrecoTotal();
    double getTaxaLucro();
    std::string getFormaPagamento();
    std::string getDataVenda();
    std::string getEndereco();
    QString getNomeCliente();
    QString getNumeroCartao();
    void getRetirarProdutoNome(std::string nomeProduto);

};

#endif // COMANDA_H

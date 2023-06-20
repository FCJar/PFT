#ifndef COMANDA_H
#define COMANDA_H

#include <string>
#include "produto.h"
#include <vector>

class Comanda
{
private:
    int _Id,_IdAtendente;
    double _PrecoTotal,_TaxaLucro;
    std::string _FormaPagamento, _DataVenda,_Endereco;
    std::vector<Produto*> _Produtos;
public:

    Comanda(int idAtendente,std::string formaPagamento,std::string endereco);
    void setId(int id);
    void getAdcionarProduto(Produto* p);
    void imprimirInfoComanda();
    int getId();
    int getIdAtendente();
    double getPrecoTotal();
    double getTaxaLucro();
    std::string getFormaPagamento();
    std::string getDataVenda();
    std::string getEndereco();
    void Comanda::setFormaPaga(std::string fp);
    void getRetirarProdutoNome(std::string nomeProduto);

};

#endif // COMANDA_H

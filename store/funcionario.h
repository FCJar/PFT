#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H


#include <string>
#include "produto.h"
#include "comanda.h"
#include "estoque.h"
#include "caixa.h"
#include <vector>

class Funcionario
{
private:
    int _Id,_Cpf;
    std::string _NomeCompleto;
    double _Salario;
    Comanda* _ComandasEmPendente;
public:
    int getId();
    Funcionario(int id,int cpf,double salario);
    void CriarComada(std::string formaPagamento,std::string endereco);
    void VenderItem(Estoque* e,std::string nomeProduto);
    void RetirarProdutoComanda(std::string nomePr);
    void MudarFormaDePagamento(std::string Fp);
    void PagarComanda(Caixa* cx);
};

#endif // FUNCIONARIO_H

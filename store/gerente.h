#ifndef GERENTE_H
#define GERENTE_H

#include <string>
#include "produto.h"
#include "comanda.h"
#include "funcionario.h"
#include <vector>

class Gerente : public Funcionario
{
private:
    int _Senha;
public:
    Gerente();
    Gerente(int senha,int id,int cpf,double salario);
    double RetornarLucroTotal(Caixa* cx);
    double ConsultarLucroPorDia(Caixa* cx,std::string dia);
    double RetornarVendasaDiariasPorFuncionario(Caixa* cx,int idFunc,std::string dia);
    double RetornarVendasTotaisPorFuncionario(Caixa* cx,int idFunc);

};
#endif // GERENTE_H

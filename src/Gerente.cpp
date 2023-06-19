#include "Gerente.hpp"

Gerente::Gerente(int senha,int id,int cpf,double salario):Gerente::Funcionario(id,cpf,salario){
    Gerente::_Senha=senha;
};

double Gerente::RetornarLucroTotal(Caixa* cx){
    double valor=cx->RetornarDinheiroCx();
};

double Gerente::ConsultarLucroPorDia(Caixa* cx,std::string dia){
    double valor=cx->RetornarDinheiroCxPorDia(dia);
    return valor;
};

double RetornarVendasaDiariasPorFuncionario(Caixa* cx,int idFunc,std::string dia){
    double valor=cx->RetornarVendasPorFuncionarioPorDia(idFunc,dia);
    return valor;
};

double RetornarVendasTotaisPorFuncionario(Caixa* cx,int idFunc){
    double valor=cx->RetornarVendasPorFuncionario(idFunc);
    return valor;
}; 
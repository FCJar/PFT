#include "Atendente.hpp"

Atendente::Atendente(int id,int cpf,double salario):Atendente::Funcionario(id,cpf,salario){};

double Atendente::RetornarVendasaDiarias(Caixa* cx,std::string dia){
    double valor = cx->RetornarVendasPorFuncionarioPorDia(Atendente::getId(),dia);
    return valor;

};

double Atendente::RetornarVendasTotais(Caixa* cx){
   double valor= cx->RetornarVendasPorFuncionario(Atendente::getId());
    return valor;
}; 
    


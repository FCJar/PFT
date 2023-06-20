#include"Atendente.h"

Atendente::Atendente(int id,int cpf,double salario):Atendente::Funcionario(id,cpf,salario){};

double Atendente::RetornarVendasaDiarias(Caixa* cx,std::string dia){
    cx->RetornarVendasPorFuncionarioPorDia(Atendente::getId(),dia);
};

double Atendente::RetornarVendasTotais(Caixa* cx){
    cx->RetornarVendasPorFuncionario(Atendente::getId());
};


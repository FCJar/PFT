#ifndef ATENDENTE_HPP
#define ATENDENTE_HPP

#include "Funcionario.hpp"

class Atendente : public Funcionario
{

    public:
        Atendente(int id,int cpf,double salario);
        double RetornarVendasaDiarias(Caixa* cx,std::string dia);
        double RetornarVendasTotais(Caixa* cx); 
    
};

#endif /* ATENDENTE_HPP */

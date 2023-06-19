#ifndef ATENDENTE_HPP
#define ATENDENTE_HPP

#include "Funcionario.hpp"

class Atendente : public Funcionario
{

    public:
    double RetornarVendasaDiarias(std::string dia);
    double RetornarVendasTotais(); 
    
};

#endif /* ATENDENTE_HPP */

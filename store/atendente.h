#ifndef ATENDENTE_H
#define ATENDENTE_H


#include "funcionario.h"

class Atendente : public Funcionario
{

public:
    Atendente(int id,int cpf,double salario);
    double RetornarVendasaDiarias(Caixa* cx,std::string dia);
    double RetornarVendasTotais(Caixa* cx);

};

#endif // ATENDENTE_H

#ifndef CAIXA_H
#define CAIXA_H

#include <string>
#include "produto.h"
#include "comanda.h"
#include "funcionario.h"
#include <vector>

class Caixa
{
private:
    double _IdCaixa,_IdComanda;
    double _DindheiroCx,_LucroTotal;
    std::vector <Comanda*> _comandasPagas;
public:
    Caixa(int idCaixa);
    double RetornarDinheiroCx();
    double RetornarLucroTotal();
    void AdcionarComanda(Comanda* C);
    double RetornarLucroPorDia(std::string dia);
    double RetornarDinheiroCxPorDia(std::string dia);
    double RetornarVendasPorFuncionario(int idAtendente);
    double RetornarVendasPorFuncionarioPorDia(int idAtendente,std::string dia);
};

#endif // CAIXA_H

#include "Caixa.hpp"

Caixa::Caixa(int idCaixa){
    Caixa::_IdCaixa=idCaixa;
    Caixa::_IdComanda=0;
};

double Caixa::RetornarDinheiroCx(){
    return Caixa::_DindheiroCx;
};

double Caixa::RetornarLucroTotal(){
    return Caixa::_LucroTotal;
};

void Caixa::AdcionarComanda(Comanda* c){
    c->setId(Caixa::_IdComanda);
    Caixa::_IdComanda++;
};

double Caixa::RetornarLucroPorDia(std::string dia){
    double lucroPorDia=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(_comandasPagas[i]->getDataVenda()==dia){
            lucroPorDia=_comandasPagas[i]->getTaxaLucro(); 
        };
    };

    return lucroPorDia;
}

double Caixa::RetornarDinheiroCxPorDia(std::string dia){
    double dinheiroCx=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(_comandasPagas[i]->getDataVenda()==dia){
            dinheiroCx=_comandasPagas[i]->getPrecoTotal(); 
        };
    };

    return dinheiroCx;
};
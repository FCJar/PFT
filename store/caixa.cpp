#include "caixa.h"

Caixa::Caixa()
{

}

Caixa::Caixa(int idCaixa){
    _IdCaixa=idCaixa;
    _IdComanda=0;
};

double Caixa::RetornarDinheiroCx(){
    return _DindheiroCx;
};

double Caixa::RetornarLucroTotal(){
    return _LucroTotal;
};

void Caixa::AdcionarComanda(Comanda* c){
    //necessario throw a error
    c->setId();
    _IdComanda++;
};

double Caixa::RetornarLucroPorDia(std::string dia){
    //necessario throw a error
    double lucroPorDia=0;
    for(int i=0;i<_comandasPagas.size();i++){
        if(_comandasPagas[i]->getDataVenda()==dia){
            lucroPorDia=_comandasPagas[i]->getTaxaLucro();
        };
    };

    return lucroPorDia;
}

double Caixa::RetornarDinheiroCxPorDia(std::string dia){
    //necessario throw a error
    double dinheiroCx=0;
    for(int i=0;i<_comandasPagas.size();i++){
        if(_comandasPagas[i]->getDataVenda()==dia){
            dinheiroCx=_comandasPagas[i]->getPrecoTotal();
        };
    };

    return dinheiroCx;
};


double Caixa::RetornarVendasPorFuncionario(int idAtendente){
    //necessario throw a error
    double vendas=0;
    for(int i=0;i<_comandasPagas.size();i++){
        if(_comandasPagas[i]->getIdAtendente()==idAtendente){
            vendas=_comandasPagas[i]->getPrecoTotal();
        };
    };
};

double Caixa::RetornarVendasPorFuncionarioPorDia(int idAtendente,std::string dia){
    //necessario throw a error
    double vendas=0;
    for(int i=0;i<_comandasPagas.size();i++){
        if(_comandasPagas[i]->getIdAtendente()==idAtendente && _comandasPagas[i]->getDataVenda()==dia){
            vendas=_comandasPagas[i]->getPrecoTotal();
        };
    };
};

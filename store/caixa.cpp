#include "caixa.h"

Caixa::Caixa()
{

}

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
    //necessario throw a error
    c->setId(Caixa::_IdComanda);
    Caixa::_IdComanda++;
};

double Caixa::RetornarLucroPorDia(std::string dia){
    //necessario throw a error
    double lucroPorDia=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(_comandasPagas[i]->getDataVenda()==dia){
            lucroPorDia=_comandasPagas[i]->getTaxaLucro();
        };
    };

    return lucroPorDia;
}

double Caixa::RetornarDinheiroCxPorDia(std::string dia){
    //necessario throw a error
    double dinheiroCx=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(Caixa::_comandasPagas[i]->getDataVenda()==dia){
            dinheiroCx=_comandasPagas[i]->getPrecoTotal();
        };
    };

    return dinheiroCx;
};


double Caixa::RetornarVendasPorFuncionario(int idAtendente){
    //necessario throw a error
    double vendas=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(Caixa::_comandasPagas[i]->getIdAtendente()==idAtendente){
            vendas=_comandasPagas[i]->getPrecoTotal();
        };
    };
};

double Caixa::RetornarVendasPorFuncionarioPorDia(int idAtendente,std::string dia){
    //necessario throw a error
    double vendas=0;
    for(int i=0;i<Caixa::_comandasPagas.size();i++){
        if(Caixa::_comandasPagas[i]->getIdAtendente()==idAtendente && Caixa::_comandasPagas[i]->getDataVenda()==dia){
            vendas=_comandasPagas[i]->getPrecoTotal();
        };
    };
};

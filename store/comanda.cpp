#include "comanda.h"
#include "iostream"

Comanda::Comanda()
{

}

// Setter methods
void Comanda::setTotal(float Total) {
    _PrecoTotal = Total;
}

void Comanda::setNumeroCartao(QString NumeroCartao) {
    _NumeroCartao = NumeroCartao;
}

void Comanda::setNomeCliente(QString NomeCliente) {
    _NomeCliente = NomeCliente;
}

void Comanda::setId() {
    _Id = rand()%(1000000000 - 1000000 + 1) + 1000000; // inteiro entre 1 milhao e 1 bilhao
}

void Comanda::setIdAtendente() {
    _IdAtendente = rand()%(1000000000 - 1000000 + 1) + 1000000; // inteiro entre 1 milhao e 1 bilhao
}

void Comanda::getAdcionarProduto(Produto* p){
    _Produtos.push_back(p);
    _PrecoTotal=Comanda::_PrecoTotal+p->getPreco();
    _TaxaLucro=Comanda::_TaxaLucro+p->getLucroProduto();
};

void Comanda::imprimirInfoComanda(){
    std::cout<<"Valor:"<<Comanda::_PrecoTotal<<std::endl;
    std::cout<<"Produtos na Comanda:"<<std::endl;
    for (int i=0;i<Comanda::_Produtos.size();i++)
    {
        std::cout<<Comanda::_Produtos[i]->getNome()<<"\t"<<Comanda::_Produtos[i]->getDataValidade()<<"\t"
                  <<Comanda::_Produtos[i]->getPreco()<<std::endl;
    };
};

// Getters

int Comanda::getId(){
    return _Id;
};

int Comanda::getIdAtendente(){
    return _IdAtendente;
};

double Comanda::getPrecoTotal(){
    return _PrecoTotal;
};

double Comanda::getTaxaLucro(){
    return _TaxaLucro;
};

std::string Comanda::getFormaPagamento(){
    return _FormaPagamento;
};

std::string Comanda::getDataVenda(){
    return _DataVenda;
};

std::string Comanda::getEndereco(){
    return _Endereco;
};

QString Comanda::getNomeCliente(){
    return _NomeCliente;
};

QString Comanda::getNumeroCartao(){
    return _NumeroCartao;
};

void Comanda::getRetirarProdutoNome(std::string nomeProduto){
    //necessario throw a error
    int aux=0;
    for (int i=0;i<_Produtos.size();i++)
    {
        if(_Produtos[i]->getNome()==nomeProduto){
            _Produtos.erase(_Produtos.begin()+i);
            aux=1;
        };
    };

};

void Comanda::setFormaPaga(std::string fp){
    _FormaPagamento=fp;
};

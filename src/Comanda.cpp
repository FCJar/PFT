#include "Comanda.hpp"
#include "iostream"

Comanda::Comanda(int idAtendente, std::string formaPagamento,std::string endereco){
    Comanda::_Endereco=endereco;
    Comanda::_IdAtendente=idAtendente;
    Comanda::_FormaPagamento=formaPagamento;
};

void Comanda::setId(int id){
    Comanda::_Id=id;
};

void Comanda::getAdcionarProduto(Produto* p){
    Comanda::_Produtos.push_back(p);
    Comanda::_PrecoTotal=Comanda::_PrecoTotal+p->getPreco();
    Comanda::_TaxaLucro=Comanda::_TaxaLucro+p->getLucroProduto();
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

int Comanda::getId(){
    return Comanda::_Id;
};

int Comanda::getIdAtendente(){
    return Comanda::_IdAtendente;
};

double Comanda::getPrecoTotal(){
    return Comanda::_PrecoTotal;
};

double Comanda::getTaxaLucro(){
    return Comanda::_TaxaLucro;
};

std::string Comanda::getFormaPagamento(){
    return Comanda::_FormaPagamento;
};

std::string Comanda::getDataVenda(){
    return Comanda::_DataVenda;
};

std::string Comanda::getEndereco(){
    return Comanda::_Endereco;
};

void Comanda::getRetirarProdutoNome(std::string nomeProduto){
//necessario throw a error
    int aux=0;
    for (int i=0;i<Comanda::_Produtos.size();i++)
    {
        if(Comanda::_Produtos[i]->getNome()==nomeProduto){
            delete  _Produtos[i];
            Comanda::_Produtos.erase(_Produtos.begin()+i);
            aux=1;
        };
    }; 
    
};

void Comanda::setFormaPaga(std::string fp){
    Comanda::_FormaPagamento=fp;
};
#include "Estoque.hpp"
#include<iostream>
Estoque::Estoque(){
    Estoque::_IdRegistro=0;
};

std::string Estoque::retiraProdutoNome(std::string NomeProduto){
    int aux=0;
    std::string msg="";
    for (int i=0;i<Estoque::_Produtos.size();i++)
    {
        if(Estoque::_Produtos[i]->getNome()==NomeProduto){
            Estoque::_Produtos.erase(_Produtos.begin()+i);
            aux=1;
        }
    }; 

    if(aux==0){
        msg="Produto indidponivel";
    };

    return msg;
};

void Estoque::infoProduto(){
    std::cout<<"Produto em estoque"<<std::endl;
    for (int i=0;i<Estoque::_Produtos.size();i++)
    {
        std::cout<<Estoque::_Produtos[i]->getNome()<<"\t"<<Estoque::_Produtos[i]->getDataValidade()<<std::endl;
    }; 
};

void Estoque::adcionarProduto(Produto* p){
    p->setId(Estoque::_IdRegistro);
    Estoque::_IdRegistro++;
    Estoque::_Produtos.push_back(p);
};

void Estoque::retornarProduto(Produto* p){
    Estoque::_Produtos.push_back(p);
};
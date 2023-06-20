#include "estoque.h"

#include<iostream>
Estoque::Estoque(){
    Estoque::_IdRegistro=0;
};

void Estoque::retiraProdutoNome(std::string nomeProduto){
    //e necessario throw a error msg em caso de produto não encontrado
    int aux=0;
    std::string msg="";
    for (int i=0;i<Estoque::_Produtos.size();i++)
    {
        if(Estoque::_Produtos[i]->getNome()==nomeProduto){
            Estoque::_Produtos.erase(_Produtos.begin()+i);
            aux=1;
        };
    };
};

Produto* Estoque::venderProdutoemEstoque(std::string nomeProduto){
    //e necessario throw a error msg em caso de produto não encontrado
    int aux=0;
    Produto* p;
    for (int i=0;i<Estoque::_Produtos.size();i++)
    {
        if(Estoque::_Produtos[i]->getNome()==nomeProduto){
            Estoque::_Produtos.erase(_Produtos.begin()+i);
            aux=1;
            p=_Produtos[i];
        };
    };
    return p;
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

#include "Produto.hpp"

Produto::Produto (int id,std::string nome,std::string tipo,double preco,double lucroProduto){
    Produto::_Id=id;
    Produto::_Nome=nome;
    Produto::_Tipo=tipo;
    Produto::_Preco=preco;
    Produto::_LucroProduto=lucroProduto;
};

int Produto::getId(){
    return Produto::_Id;
};

std::string Produto::getNome(){
    return Produto::_Nome;
};

std::string Produto::getTipo(){
    return Produto::_Tipo;
};

std::string Produto::getDataValidade(){
    return Produto::_DataValidade;
};

std::string Produto::getDataValidade(){
    return Produto::_DataValidade;
};

double Produto::getPreco(){
    return Produto::_Preco;
};

double Produto::getLucroProduto(){
    return Produto::_LucroProduto;
};
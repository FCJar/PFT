#include "produto.h"
Produto::Produto() {}

Produto::Produto(std::string nome, std::string tipo, float preco, float lucroProduto)
    : _Nome(nome), _Tipo(tipo), _Preco(preco), _LucroProduto(lucroProduto) {}

// Setter methods
void Produto::setNome(std::string nome) {
    _Nome = nome;
}

void Produto::setTipo(std::string tipo) {
    _Tipo = tipo;
}

void Produto::setPreco(float preco) {
    _Preco = preco;
}

void Produto::setLucroProduto(float lucroProduto) {
    _LucroProduto = lucroProduto;
}

void Produto::setId(int id){
    _Id=id;
};

int Produto::getId(){
    return _Id;
};

std::string Produto::getNome(){
    return _Nome;
};

std::string Produto::getTipo(){
    return _Tipo;
};

std::string Produto::getDataValidade(){
    return Produto::_DataValidade;
};

double Produto::getPreco(){
    return _Preco;
};

double Produto::getLucroProduto(){
    return Produto::_LucroProduto;
};

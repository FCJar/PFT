#include "Funcionario.hpp"

int Funcionario::getId(){
    return Funcionario::_Id;
};

Funcionario::Funcionario(int id,int cpf,double salario){
    Funcionario::_Id=id;
    Funcionario::_Cpf=cpf;
    Funcionario::_Salario=salario;
};

void Funcionario::CriarComada(std::string formaPagamento,std::string endereco){
    Funcionario::_ComandasEmPendente=new Comanda(Funcionario::_Id,formaPagamento,endereco);    
};

void Funcionario::VenderItem(Estoque* e,std::string nomeProduto){
    //e necessario throe a error msg em caso de produto não encontrado
    Produto* p = e->venderProdutoemEstoque(nomeProduto);
    Funcionario::_ComandasEmPendente->getAdcionarProduto(p);
};

void Funcionario::RetirarProdutoComanda(std::string nomePr){
    Funcionario::_ComandasEmPendente->getRetirarProdutoNome(nomePr);
};

void Funcionario::MudarFormaDePagamento(std::string fp){
    Funcionario::_ComandasEmPendente->setFormaPaga(fp);
};

void Funcionario::PagarComanda(Caixa* cx){
    cx->AdcionarComanda(_ComandasEmPendente);
    Funcionario::_ComandasEmPendente=nullptr;
};
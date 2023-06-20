#include "funcionario.h"

Funcionario::Funcionario()
{

}

int Funcionario::getId(){
    return _Id;
};

Funcionario::Funcionario(int id,int cpf,double salario){
    _Id=id;
    _Cpf=cpf;
    _Salario=salario;
};

void Funcionario::VenderItem(Estoque* e,std::string nomeProduto){
    //e necessario throe a error msg em caso de produto não encontrado
    Produto* p = e->venderProdutoemEstoque(nomeProduto);
    _ComandasEmPendente->getAdcionarProduto(p);
};

void Funcionario::RetirarProdutoComanda(std::string nomePr){
    _ComandasEmPendente->getRetirarProdutoNome(nomePr);
};

void Funcionario::MudarFormaDePagamento(std::string fp){
    _ComandasEmPendente->setFormaPaga(fp);
};


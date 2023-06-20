#ifndef ESTOQUE_H
#define ESTOQUE_H

#include <string>
#include <vector>
#include "produto.h"

class Estoque
{
private:
    std::vector<Produto*> _Produtos;
    int _IdRegistro;
public:
    //id deve ser iniciado junto com com construtor
    Estoque();
    void retiraProdutoNome(std::string nomeProduto);
    Produto* venderProdutoemEstoque(std::string nomeProduto);
    void infoProduto();
    void adcionarProduto(Produto* p);
    void retornarProduto(Produto* p);
};

#endif // ESTOQUE_H

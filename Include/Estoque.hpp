#include <string>
#include <vector>
#include "Produto.hpp"

class Estoque
{
    private:
        std::vector<Produto*> _Produtos;
        int id;
    public:
        //id deve ser iniciado junto com com construtor
        Estoque();
        void retiraProdutoNome(std::string NomeProduto);
        void adcionarProduto(Produto* p);
};

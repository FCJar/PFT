#include <string>
#include <vector>
#include "Produto.hpp"

class Estoque
{
    private:
        std::vector<Produto*> _Produtos;
        int _IdRegistro;
    public:
        //id deve ser iniciado junto com com construtor
        Estoque();
        std::string retiraProdutoNome(std::string NomeProduto);
        void adcionarProduto(Produto* p);
        void retornarProduto(Produto* p);
};

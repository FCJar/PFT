#include <string>
#include <vector>
#include "Produto.hpp"

class Estoque
{
    private:
        std::vector<Produto*> _produtos;
        int id;
    public:
        //id deve ser iniciado junto com com construtor
        Estoque();
        void retiraProduto();
        void adcionarProduto();
        void retiraProdutoPorTipo();
        void adcionarProdutoPorTipo();
};

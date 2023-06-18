#include <string>
#include "Produto.hpp"
#include <vector>

class Comanda
{
    private:
        int _Id,_IdAtendente;
        double _PrecoTotal,_TaxaLucro;
        std::string _FormaPagamento, _DataVenda,_Endereco;
        std::vector<Produto*> _Produtos;
    public:
        Comanda(int Id,int IdAtendente,std::string FormaPagamento);
        void getAdcionarProdutoNome(std::string NomeProduto);
        void getRetirarProdutoNome(std::string NomeProduto);
        int getId();
        int getIdAtendente();
        double getPrecoTotal();
        double getTaxaLucro();
        std::string getFormaPagamento();
        std::string getDataVenda();
        std::string getEndereco();

};


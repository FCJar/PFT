#include <string>
#include "Produto.hpp"
#include "Comanda.hpp"
#include "Funcionario.hpp"
#include <vector>

class Caixa
{
    private:
        double DindheiroCx;
        std::vector <Comanda*> _comandasPagas;
    public:
        void RetornarDinheiroCx();
        void RetornarLucroTotal();
        void AdcionarComanda(Comanda* C);
        void RetornarLucroPorDia(std::string dia);
    
};

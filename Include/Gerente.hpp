#include <string>
#include "Produto.hpp"
#include "Comanda.hpp"
#include "Funcionario.hpp"
#include <vector>

class Gerente : public Funcionario
{   
    private:
        int senha;
    public:
        Gerente(int senha);
        void ConsultarLucroPorDia();
        double RetornarVendasaDiariasPorFuncionario(int idFunc,std::string dia);
        double RetornarVendasTotaisPorFuncionario(int idFunc); 

};

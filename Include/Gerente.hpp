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
        void ConsultarLucroPorDia();

};

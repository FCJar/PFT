#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>
#include "Produto.hpp"
#include "Comanda.hpp"
#include <vector>

class Funcionario
{
    private:
        int _Id,_Cpf;
        std::string _NomeCompleto;
        double _Salario;
        Comanda _ComandasEmPendente;
    public:
        Funcionario(int Id,int Cpf,double Salario);
        void CriarComada(int Id,int IdAtendente,std::string FormaPagamento);
        void VenderItem(std::string NomeProduto);
        void ModificarComanda();
        void PagarComanda();
};

#endif /* FUNCIONARIO_HPP */
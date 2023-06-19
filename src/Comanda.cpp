#include "Comanda.hpp"

Comanda::Comanda(int IdAtendente, std::string FormaPagamento);
void setId(int id);
void getAdcionarProduto(Produto* p);
void getRetirarProdutoNome(std::string NomeProduto);
int getId();
int getIdAtendente();
double getPrecoTotal();
double getTaxaLucro();
std::string getFormaPagamento();
std::string getDataVenda();
std::string getEndereco();
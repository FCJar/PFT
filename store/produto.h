#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>

class Produto
{
private:
    int _Id;
    std::string _Nome, _Tipo, _DataValidade;
    float _Preco, _LucroProduto;
public:
    Produto();
    Produto (std::string nome,std::string tipo,float preco,float lucroProduto);
    // Setter methods
    void setNome(std::string nome);
    void setTipo(std::string tipo);
    void setPreco(float preco);
    void setLucroProduto(float lucroProduto);
    void setId(int id);
    int getId();
    std::string getNome();
    std::string getTipo();
    std::string getDataValidade();
    double getPreco();
    double getLucroProduto();
};

#endif // PRODUTO_H

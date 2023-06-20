#ifndef ATENDENTE_H
#define ATENDENTE_H


#include "funcionario.h"
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <QString>

class Atendente
{
private:
    QString nome;
    int idade;
    int tempoServico;
    QString apelido;
    // std::vector<std::string> nomesDisponiveis; // Array de opções de nomes

public:
    Atendente();

    // Setters
    void setNome( QString nome);
    void setIdade(int idade);
    void setTempoServico(int tempoServico);
    void setApelido(QString apelido);
    // void setNomesDisponiveis(std::vector<std::string> nomesDisponiveis);

    // Getters
    QString getNome();
    int getIdade();
    int getTempoServico();
    QString getApelido();

    // Método para sortear um nome aleatório
    QString sortearNomeAleatorio(std::vector<QString> nomesDisponiveis);

    // Método para sortear um apelido aleatório
    QString sortearApelidoAleatorio(std::vector<QString> apelidosDisponiveis);
};


#endif // ATENDENTE_H

#include"atendente.h"


Atendente::Atendente() {}

// Setters

void Atendente::setNome( QString nome) { this->nome = nome; }

void Atendente::setIdade(int idade) { this->idade = idade; }

void Atendente::setTempoServico(int tempoServico) { this->tempoServico = tempoServico; }

void Atendente::setApelido(QString apelido) { this->apelido = apelido; }

// void Atendente::setNomesDisponiveis(std::vector<std::string> nomesDisponiveis) { this->nomesDisponiveis = nomesDisponiveis; }

// Getters

QString Atendente::getNome() { return nome; }

int Atendente::getIdade() { return idade; }

int Atendente::getTempoServico() { return tempoServico; }

QString Atendente::getApelido() { return apelido; }

//Método para sortear um nome aleatório
QString Atendente::sortearNomeAleatorio(std::vector<QString> nomesDisponiveis) {
    if (nomesDisponiveis.empty()) {
        return "Nenhum nome disponível";
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Inicializar a semente do gerador de números aleatórios
    int indiceAleatorio = std::rand() % nomesDisponiveis.size(); // Gerar um índice aleatório baseado no tamanho do array
    return nomesDisponiveis[indiceAleatorio];
}

//Método para sortear um apelido aleatório
QString Atendente::sortearApelidoAleatorio(std::vector<QString> apelidosDisponiveis) {
    if (apelidosDisponiveis.empty()) {
        return "Nenhum nome disponível";
    }

    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Inicializar a semente do gerador de números aleatórios
    int indiceAleatorio = std::rand() % apelidosDisponiveis.size(); // Gerar um índice aleatório baseado no tamanho do array
    return apelidosDisponiveis[indiceAleatorio];
}



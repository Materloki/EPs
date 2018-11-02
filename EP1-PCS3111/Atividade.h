#ifndef ATIVIDADE_H
#define ATIVIDADE_H
#include "Pessoa.h"
#include <iostream>

using namespace std;
#define MAXIMO_RECUROS 10


class Atividade{
private:
    string nome;
    int horasNecessarias;
    int quantidadeDePessoas = 0;
    Pessoa* pessoas[MAXIMO_RECUROS];
public:
    Atividade(string nome, int horasNecessarias);
    ~Atividade();

    string getNome();
    int getHorasNecessarias();

    bool adicionar(Pessoa* recurso);
    Pessoa** getPessoas();
    int getQuantidadeDePessoas();

    int getDuracao();
    double getCusto();

    void imprimir();
};

#endif // ATIVIDADE_H

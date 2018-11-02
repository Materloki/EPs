#ifndef PROJETO_H
#define PROJETO_H
#include <iostream>
#include "Pessoa.h"
#include "Atividade.h"
#define MAXIMO_ATIVIDADES 10
#define MAXIMO_RECUROS 10


using namespace std;

class Projeto{
private:
    string nome;
    Atividade* atividades[MAXIMO_ATIVIDADES];
    Pessoa* recursos[MAXIMO_RECUROS];
    int quantidadeDeAtividades = 0;
    int quantidadeDePessoas = 0;

public:
    Projeto(string nome);
    ~Projeto();
    string getNome();

    bool adicionar(Atividade* a);
    Atividade** getAtividades();
    int getQuantidadeDeAtividades();

    bool adicionarRecurso(Pessoa* p);
    Pessoa** getPessoas();
    int getQuantidadeDePessoas();

    int getDuracao();
    double getCusto();

    void imprimir();
};

#endif // PROJETO_H

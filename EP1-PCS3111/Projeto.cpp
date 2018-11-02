#include "Projeto.h"
#include <iostream>
#include <cmath>
using namespace std;

Projeto::Projeto(string nome):
    nome(nome){
    }

Projeto::~Projeto(){
    cout << "Destruido" << endl;
}

string Projeto::getNome(){
    return nome;
}

bool Projeto::adicionar(Atividade* a){
    if(quantidadeDeAtividades < MAXIMO_ATIVIDADES){
        for(int i = 0; i < quantidadeDeAtividades; i++){
            if(atividades[i] ==  a) return false;
        }
        atividades[quantidadeDeAtividades] = a;
        quantidadeDeAtividades ++;
        return true;
    }
    return false;
}

Atividade** Projeto::getAtividades(){
    return atividades;
}

bool Projeto::adicionarRecurso(Pessoa *p){
    if(quantidadeDePessoas >= MAXIMO_RECUROS) return false;
    for(int i = 0; i < quantidadeDePessoas; i++){
        if(recursos[i] == p)return false;
    }
    recursos[quantidadeDePessoas] = p;
    quantidadeDePessoas++;
    return true;
}

Pessoa** Projeto::getPessoas(){
    return recursos;
}

int Projeto::getQuantidadeDePessoas(){
    return quantidadeDePessoas;
}

int Projeto::getDuracao(){
    int duracao = 0;
    for(int i = 0; i < quantidadeDeAtividades; i++){
        duracao += atividades[i]->getDuracao();
    }
    return duracao;
}

double Projeto::getCusto(){
    double custo = 0.0;
    for(int i = 0; i < quantidadeDeAtividades; i++){
        custo += atividades[i]->getCusto();
    }
    return custo;
}

void Projeto::imprimir(){
    cout << nome << " - " << this->getDuracao() << " dias - R$" << this->getCusto() << endl;
    cout << "----" << endl;
    for(int i = 0; i < quantidadeDeAtividades; i++){
        atividades[i]->imprimir();
    }
}

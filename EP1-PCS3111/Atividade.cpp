#include "Atividade.h"
#include <iostream>
#include <cmath>
using namespace std;

Atividade::Atividade(string nome, int horasNecessarias):
    nome(nome), horasNecessarias(horasNecessarias){

    }
Atividade::~Atividade(){
    cout << "Destruido" << endl;
}
string Atividade::getNome(){
    return nome;
}
int Atividade::getHorasNecessarias(){
    return horasNecessarias;
}

bool Atividade::adicionar(Pessoa* recurso){
    if(quantidadeDePessoas >= MAXIMO_RECUROS)return false;
    for(int i = 0; i < quantidadeDePessoas; i++){
        if(pessoas[i] == recurso)return false;
    }
    pessoas[quantidadeDePessoas] = recurso;
    quantidadeDePessoas++;
    return true;
}

Pessoa** Atividade::getPessoas(){
    return pessoas;
}

int Atividade::getQuantidadeDePessoas(){
    return quantidadeDePessoas;
}

int Atividade::getDuracao(){
    if(quantidadeDePessoas == 0)return -1;
    int duracao;
    double horasTotal = 0;
    for(int i = 0; i < quantidadeDePessoas; i++){
        horasTotal += pessoas[i]->getHorasDiarias();
    }
    duracao = ceil(abs(horasNecessarias/horasTotal));
    return duracao;
}

double Atividade::getCusto(){
    double custo = 0.0;
    for(int i = 0; i < quantidadeDePessoas; i++){
        custo += this->getDuracao()*pessoas[i]->getCusto(1);
    }
    return custo;
}

void Atividade::imprimir(){
    cout << nome << " - " << this->getDuracao() << " dias - R$" << this->getCusto() <<endl;
}

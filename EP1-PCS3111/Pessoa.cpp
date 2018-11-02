#include "Pessoa.h"
#include <iostream>

using namespace std;

Pessoa::Pessoa(string nome, double valorPorHora, int horasDiarias):
    nome(nome), valorPorHora(valorPorHora), horasDiarias(horasDiarias){

    }
Pessoa::~Pessoa(){
    cout << "Destruido" << endl;
}
string Pessoa::getNome(){
    return nome;
}
double Pessoa::getValorPorHora(){
    return valorPorHora;
}
int Pessoa::getHorasDiarias(){
    return horasDiarias;
}
double Pessoa::getCusto(int dias){
    double custo = dias*valorPorHora*horasDiarias;
    return custo;
}
void Pessoa::imprimir(){
    cout << nome << " - R$" << valorPorHora << " - " << horasDiarias <<"h por dia" << endl;
}

#include "Recurso.h"
#include <iostream>

using namespace std;

Recurso::Recurso(string nome){
    this->nome = nome;
}

Recurso::~Recurso(){
    cout << "Recurso Destruido" << endl;
}

string Recurso::getNome(){
    return nome;
}

#ifndef RECURSO_H
#define RECURSO_H

#include <iostream>

using namespace std;

class Recurso
{
    public:
        Recurso(string nome);
        virtual ~Recurso();

    protected:
        virtual string getNome();
        virtual double getCusto(int dias);
        virtual void imprimir();

    private:
        string nome;
};
#endif // RECURSO_H

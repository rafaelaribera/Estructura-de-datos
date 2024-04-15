#pragma once
#include <iostream>
#include <string>

using namespace std;

#define MAX_ELEMENTOS 100

class ListaEstatica {
private:
    string elementos[MAX_ELEMENTOS];
    int cantidad;

public:
    ListaEstatica();
    void InsertarAlInicio( string& elemento);
    void InsertarAlFinal( string& elemento);
    void EliminarAlInicio();
    void EliminarAlFinal();
    void Mostrar() ;
    bool ListaVacia() ;
    bool ListaLlena() ;
};

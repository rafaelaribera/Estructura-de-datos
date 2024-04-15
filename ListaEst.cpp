#include "ListaEstatica.h"

ListaEstatica::ListaEstatica() : cantidad(0) {}

void ListaEstatica::InsertarAlInicio( string& elemento) {
    if (ListaLlena()) {
        cout << "Error: La lista está llena." << endl;
        return;
    }
    for (int i = cantidad; i > 0; --i) {
        elementos[i] = elementos[i - 1];
    }
    elementos[0] = elemento;
    ++cantidad;
}

void ListaEstatica::InsertarAlFinal( string& elemento) {
    if (ListaLlena()) {
        cout << "Error: La lista está llena." << endl;
        return;
    }
    elementos[cantidad] = elemento;
    ++cantidad;
}

void ListaEstatica::EliminarAlInicio() {
    if (ListaVacia()) {
        cout << "Error: La lista está vacía." << endl;
        return;
    }
    for (int i = 0; i < cantidad - 1; ++i) {
        elementos[i] = elementos[i + 1];
    }
    --cantidad;
}

void ListaEstatica::EliminarAlFinal() {
    if (ListaVacia()) {
        cout << "Error: La lista está vacía." << endl;
        return;
    }
    --cantidad;
}

void ListaEstatica::Mostrar() {
    if (ListaVacia()) {
        cout << "La lista está vacía." << endl;
        return;
    }
    cout << "Elementos de la lista:" << endl;
    for (int i = 0; i < cantidad; ++i) {
        cout << elementos[i] << endl;
    }
}

bool ListaEstatica::ListaVacia()  {
    return cantidad == 0;
}

bool ListaEstatica::ListaLlena()  {
    return cantidad == MAX_ELEMENTOS;
}

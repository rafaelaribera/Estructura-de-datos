#include "Pila.h"
#include <iostream>
using namespace std;
#define MAX_SIZE 100
Pila::Pila() {
    top = -1;
}

bool Pila::isEmpty() {
    return (top == -1);
}

bool Pila::isFull() {
    return (top == MAX_SIZE - 1);
}

void Pila::push(int elemento) {
    if (isFull()) {
        cout << "La pila está llena. No se puede añadir más elementos." << endl;
        return;
    }
    arreglo[++top] = elemento;
    cout << "Elemento agregado a la pila: " << elemento << endl;
}

void Pila::pop() {
    if (isEmpty()) {
        cout << "La pila está vacía. No se puede eliminar ningún elemento." << endl;
        return;
    }
    cout << "Elemento eliminado de la pila: " << arreglo[top--] << endl;
}

int Pila::peek() {
    if (isEmpty()) {
        cout << "La pila está vacía." << endl;
        return -1;
    }
    return arreglo[top];
}

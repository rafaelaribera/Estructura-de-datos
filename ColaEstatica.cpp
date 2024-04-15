#include "Cola.h"
#include <iostream>
using namespace std;
Cola::Cola() {
	inicio = final = 0;
}

void Cola::push(int valor) {

	if (final == MAX)
		cout << "La cola esta llena" << endl;
	else {
		info[final] = valor;
		final++;
	}

}
void Cola::pop() {

	if (inicio == final)
		cout << "La cola esta vacia" << endl;
	
	else {
		inicio++;
	}
}
void Cola::mostrar() {
	if (final == 0)
		cout << "La cola esta vacia" << endl;
	else {
		cout << "Elementos de la cola:" << endl;
		for (int i = inicio; i < final; ++i) {
			cout << info[i] << " ";
		}
		cout << endl;
	}
	
}
int Cola::size() {
		return final - inicio;
	
}
void Cola::liberar() {
	
	if (inicio != 0) {
		for (int i = 0; i < final; i++)
		{
			info[i] = info[inicio + 1];
		}
	}
	final -= inicio;
	inicio = 0;
	
}

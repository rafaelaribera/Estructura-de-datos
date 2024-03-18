#include "Array2.h"
#include <iostream>
using namespace std;
void Array2::cargarArray(int x[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ingrese el elemento " <<i + 1 << ": ";
		cin >> x[i];
	}
}
void Array2::mostrarArray(int y[])
{
	for (int i = 0; i < n; i++)
	{
		cout << "Elemento " << i + 1 << ": " << y[i] << endl;
	}
}
void Array2::MostrarSuma(int x[], int y[]) {
	for (int i = 0; i < n; i++)
	{
		cout << x[i] + y[i] << " ";
	}
}

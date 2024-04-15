#pragma once
#define MAX 100
class Cola
{

public:
	int inicio;
	int final;
	int info[MAX];
	Cola();
	void push(int valor);
	void pop();
	void mostrar();
	int size();
	void liberar();
};

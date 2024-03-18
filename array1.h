#pragma once
class Array2
{
private:
    int n;
public:
    Array2(int n)
    {
        this->n = n;
    }
    void cargarArray(int x[]);
    void mostrarArray(int y[]);
    void MostrarSuma(int x[], int y[]);
};

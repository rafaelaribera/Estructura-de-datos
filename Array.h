#pragma once
class Array
{
private:
    int n;
public:
    Array(int n)
    {
        this->n = n;
    }
    Array(int n, int y) {
        this->n = n;
    }
    void MostrarArray(int A[]);
    int MostrarMayor(int A[]);
    int MostrarMenor(int A[]);
};

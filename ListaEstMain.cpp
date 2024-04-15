#include <iostream>
#include "ListaEstatica.h"

using namespace std;

int main() {
    ListaEstatica lista;

    int opcion;
    string entrada;

    do {
        cout << "Menu:" << endl;
        cout << "1. Insertar elemento al inicio" << endl;
        cout << "2. Insertar elemento al final" << endl;
        cout << "3. Eliminar elemento al inicio" << endl;
        cout << "4. Eliminar elemento al final" << endl;
        cout << "5. Mostrar elementos de la lista" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
        case 1:
            cout << "Ingrese el elemento a insertar al inicio: ";
            getline(cin, entrada);
            lista.InsertarAlInicio(entrada);
            cout << "Elemento insertado correctamente." << endl;
            break;
        case 2:
            cout << "Ingrese el elemento a insertar al final: ";
            getline(cin, entrada);
            lista.InsertarAlFinal(entrada);
            cout << "Elemento insertado correctamente." << endl;
            break;
        case 3:
            lista.EliminarAlInicio();
            cout << "Elemento eliminado del inicio correctamente." << endl;
            break;
        case 4:
            lista.EliminarAlFinal();
            cout << "Elemento eliminado del final correctamente." << endl;
            break;
        case 5:
            lista.Mostrar();
            break;
        }

    } while (opcion != 6);

    return 0;
}

#include "Cola.h"
#include <iostream>
using namespace std;
int main()
{
    Cola l;
    int opcion, dato;
    do {
        
        cout << "MENU COLA ESTATICA" << endl;
        cout << "[1]Push" << endl;
        cout << "[2]Pop" << endl;
        cout << "[3]Mostrar" << endl;
        cout << "[4]Size" << endl;
        cout << "[5]Liberar espacio en la cola" << endl;
        cout << "[0]Salir" << endl;
        cout << "\nIngresa tu opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "Ingrese el dato a encolar: ";
            cin >> dato;
            l.push(dato);
            break;
        case 2:
            l.pop();
            break;
        case 3:
            l.mostrar();
            break;
        case 4:
            l.size();
            break;
        case 5: 
            l.liberar();
            break;
        case 0:
            return 0;
            break;
        default:
            cout << "Por favor ingresa una opcion correcta.\n";
            break;
        }
    } while (opcion != 0);
    return 0;

}

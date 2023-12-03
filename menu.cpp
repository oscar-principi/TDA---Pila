#include <iostream>
#include "menu.h"
#include "funciones.h"

using namespace std;


void menuInicio() {
    int opcion;
    cout << "****************" << endl;
    cout << "  MENU INICIO   " << endl;
    cout << "****************" << endl << endl;

    cout << "1-Crear PILA" << endl;
    cout << "0-Salir" << endl << endl;

    cout << "****************" << endl << endl;
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
    case 1: menuPila();
        break;
    case 0: exit(0);

    default: menuInicio();
    }
}

void menuPila() {
    system("cls");
    int opcion = 1, numero;
    Nodo* pila = nullptr;

    while (opcion != 0) {

        cout << "************************" << endl;
        cout << "        MENU PILA       " << endl;
        cout << "************************" << endl << endl;

        cout << "1-Insertar nodo en PILA" << endl;
        cout << "2-Eliminar nodo en PILA" << endl;
        cout << "3-Listar nodos de PILA" << endl;
        cout << "0-Salir" << endl << endl;

        cout << "************************" << endl << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            system("cls");
            cout << "************************" << endl;
            cout << "          PILA          " << endl;
            cout << "************************" << endl << endl;
            cout << endl << "Ingrese un numero: ";
            cin >> numero;
            insertarElementoPila(pila, numero);
            cout << endl << "************************" << endl << endl;
            system("cls");
            cout << "************************" << endl;
            cout << "          PILA          " << endl;
            cout << "************************" << endl << endl;
            listarPila(pila);
            cout << endl << "************************" << endl << endl;

            cout << endl;
            break;
        case 2:
            system("cls");
            cout << "************************" << endl;
            cout << "          PILA          " << endl;
            cout << "************************" << endl << endl;
            eliminarElementoPila(pila, numero);
            cout << endl << "************************" << endl << endl;
            listarPila(pila);
            cout << endl << "************************" << endl << endl;

            cout << endl;
            break;
        case 3:
            system("cls");
            cout << "************************" << endl;
            cout << "          PILA          " << endl;
            cout << "************************" << endl << endl;
            listarPila(pila);
            cout << endl << "************************" << endl << endl;

            cout << endl;
            break;
        case 0:
            exit(0);

        default:
            menuPila();
        }
        system("pause");
        system("cls");
    }
}
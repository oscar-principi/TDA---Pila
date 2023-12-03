#pragma once
#include "nodo.h"

void insertarElementoPila(Nodo*& pila, int dato);
void eliminarElementoPila(Nodo*& pila, int& dato); //El dato se pasa por referencia porque se va a eliminar.
void listarPila(Nodo* pila);
bool pilaVacia(Nodo* pila);
#include <iostream>
#include "funciones.h"
#include "nodo.h"

void insertarElementoPila(Nodo*& pila, int dato) {
	Nodo* nuevoNodo = new Nodo();
	nuevoNodo->dato = dato;
	nuevoNodo->siguiente = pila; 
	pila = nuevoNodo;
}
void eliminarElementoPila(Nodo*& pila, int& dato) {
	Nodo* nodoAuxiliar = pila;
	
	if (!pilaVacia(pila)) {
		dato = nodoAuxiliar->dato;
		pila = nodoAuxiliar->siguiente;
		delete nodoAuxiliar;
		std::cout << "Elemento eliminado: " << dato << std::endl;
	}
}
void listarPila(Nodo* pila) {
	if (pila == nullptr) {
		std::cout << "La pila esta vacia." << std::endl;
		return;
	}

	Nodo* nodoActual = pila;

	std::cout << "Elementos de la pila: ";
	while (nodoActual != nullptr) {
		std::cout << nodoActual->dato << " | ";
		nodoActual = nodoActual->siguiente;
	}

	std::cout << std::endl;
}
bool pilaVacia(Nodo* pila) {
	return (pila == nullptr) ? true : false;
}
#include "pch.h"
#include <iostream>

using namespace std;

struct TPupusas {
	int revueltas;
	int frijolconqueso;
	int queso;
	bool arroz;
};
typedef struct TPupusas Pupusas;

Pupusas pedidoPupusas() {
	Pupusas p;
	cout << "No. de pupusas revueltas: "; cin >> p.revueltas;
	cout << "No. de pupusas de frijol con queso: ";   cin >> p.frijolconqueso;
	cout << "No. de pupusas de queso: "; cin >> p.queso;
	cout << "Pupusas de arroz; \n\t1 para SI  \n\t0 para NO \n\t"; cin >> p.arroz;
	return p;
}

void mostrarPedido(Pupusas p) {
	cout << "Pupusas revueltas: " << p.revueltas << endl;
	cout << "Pupusas de frijol con queso: " << p.frijolconqueso << endl;
	cout << "Pupusas de queso: " << p.queso << endl;
	if (p.arroz)
		cout << "Pupusas de arroz: si" << endl;
	else
		cout << "Pupusas de arroz: no" << endl;
	cout << endl;
}

struct TNodo {
	Pupusas dato;
	struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertarInicio(Pupusas p) {
	Nodo *nuevo = new Nodo;
	nuevo->dato = p;
	nuevo->sig = pInicio;

	pInicio = nuevo;
}

void insertarFinal(Pupusas p) {
	Nodo *nuevo = new Nodo;
	nuevo->dato = p;
	nuevo->sig = NULL;

	if (pInicio == NULL) {
		pInicio = nuevo;
	}
	else {
		Nodo *p = pInicio;
		Nodo *q = NULL;
		while (p != NULL) {
			q = p;
			p = p->sig;
		}
		q->sig = nuevo;
	}
}

void agregarPedido() {
	Pupusas p = pedidoPupusas();
	bool continuar = true;
	do {
		int opcion = 0;
		cout << "\t1) Al principio\n\t2) Al final"
			<< "\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: insertarInicio(p);
			continuar = false;
			break;
		case 2: insertarFinal(p);
			continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);
}

void mostrarLista() {
	Nodo *s = pInicio;

	while (s != NULL) {
		mostrarPedido(s->dato);
		s = s->sig;
	}
}

int main() {
	cout << "Inicializando..." << endl;
	pInicio = NULL;

	bool continuar = true;
	do {
		int opcion = 0;
		cout << "Menu: \n\t1) Agregar pedido\n\t2) Ver pedidos"
			<< "\n\t3) Salir\n\tOpcion elegida: ";
		cin >> opcion;
		switch (opcion) {
		case 1: cout << "Agregando..." << endl;
			agregarPedido();
			break;
		case 2: cout << "Listando..." << endl;
			mostrarLista();
			break;
		case 3: continuar = false;
			break;
		default: cout << "Opcion erronea!" << endl;
			break;
		}
	} while (continuar);

	return 0;
}
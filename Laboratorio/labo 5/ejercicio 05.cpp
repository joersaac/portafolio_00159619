#include "pch.h"
#include <iostream>

using namespace std;

struct nodo {
	int info;
	struct nodo *izq;
	struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;

struct Tlnodo {
	int dato;
	struct Tlnodo *sig;
};
typedef struct Tlnodo lnodo;
lnodo *pInicio;

Arbol crearArbol(int x) {
	Arbol p = new Nodo;
	p->info = x;
	p->izq = NULL;
	p->der = NULL;
	return p;
}

void insertar(int num) {
	lnodo *nuevo = new lnodo;
	nuevo->dato = num;
	nuevo->sig = NULL;

	if (pInicio == NULL) {
		pInicio = nuevo;
		cout << "Ingresado con exito";
	}
	else {
		lnodo *p = pInicio;
		lnodo *q = NULL;
		while (p != NULL) {
			if (num != p->dato) {
				q = p;
				p = p->sig;
			}
			else {
				cout << "El dato ya habia sido ingresado";
				return;
			}
		}
		q->sig = nuevo;
		cout << "Ingresado con exito";
	}
}

void agregar(Arbol p, int unDato) {
	if (unDato > p->info) {
		if (p->der == NULL) {
			p->der = crearArbol(unDato);
			cout << "Ingresado con exito";
		}
		else {
			agregar(p->der, unDato);
		}
	}
	else if (unDato < p->info) {
		if (p->izq == NULL) {
			p->izq = crearArbol(unDato);
			cout << "Ingresado con exito";
		}
		else {
			agregar(p->izq, unDato);
		}
	}
	else {
		cout << "Dato ingresado es igual a uno ya existente en el arbol";
		return;
	}
}

void agregaralista(Arbol p, int unDato) {
	bool encontrado = false;
	if (p->info == unDato)
		insertar(unDato);
	else {
		if (unDato > p->info) {
			if (p->der != NULL)
				agregaralista(p->der, unDato);
			else
				cout << "Dato no encontrado";
		}
		else if (unDato < p->info) {
			if (p->izq != NULL)
				agregaralista(p->izq, unDato);
			else
				cout << "Dato no encontrado";
		}
	}
}

float prom() {
	lnodo *s = pInicio;
	float cont1 = s->dato, cont2 = 1;
	while (s->sig != NULL) {
		s = s->sig;
		cont1 += s->dato;
		cont2++;
	}
	return cont1 / cont2;
}

int main() {
	int variable = 0;
	cout << "Inicializando arbol...\nValor contenido en la raiz: ";
	cin >> variable;

	Arbol arbol = crearArbol(variable);

	bool continuar = true;
	int opcion;
	do {
		opcion = 0;
		cout << "\n\tMenu: ";
		cout << "\n\t1) Agregar un valor al arbol";
		cout << "\n\t2) Buscar un valor en arbol y agregalo a lista ";
		cout << "\n\tInserte -1 para calcular promedio de lista";
		cout << "\n\tOpcion elegida: "; cin >> opcion;
		switch (opcion) {
		case 1:
			cout << "Valor a igresar: "; cin >> variable;
			if (variable > 0) 
				agregar(arbol, variable);
			else 
				cout << "El valor ingresado debe ser un entero positivo\n";
			break;
		case 2:
			cout << "Valor abuscar: "; cin >> variable;
			if (variable > 0)
				agregaralista(arbol, variable);
			else
				cout << "El valor ingresado debe ser un entero positivo\n";
			break;
		case -1:
			continuar = false;
			break;
		default:
			cout << "Opcion NO valida";
		}
	} while (continuar);
	if (pInicio != NULL)
		cout << "El promedio de los valores en la lista es: " << prom();
	else
		cout << "No hay promedio que calcular." << endl;
	return 0;
}
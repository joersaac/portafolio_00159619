#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

struct TNodo {
	int dato;
	struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void insertaralista(int num) {
	Nodo *nuevo = new Nodo;
	nuevo->dato = num;
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

void mostrarLista() {
	Nodo *s = pInicio;

	while (s != NULL) {
		cout << (s->dato) << endl;
		s = s->sig;
	}
}

void mostrarPares() {
	Nodo *s = pInicio;

	while (s != NULL) {
		if ((s->dato) % 2 == 0)
			cout << (s->dato) << endl;
		s = s->sig;
	}
}

void mostrarInvertida(Nodo *p) {
	Nodo *s = p;
	
	if (s != NULL) {
		mostrarInvertida(s->sig);
		cout << (s->dato) << endl;
	}
	else
		return;
}


void mostrarImpares() {
	Nodo *s = pInicio;

	while (s != NULL) {
		if ((s->dato) % 2 != 0)
			cout << (s->dato) << endl;
		s = s->sig;
	}
}

int main()
{
	int n, num, in = 1, fin = 100;
	cout << "Cuantos numeros desea ingresar?" << endl;
	cin >> n;

	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		num=rand()%(fin-in+1)+in;
		insertaralista(num);
	}
	cout << "Los numeros de la lista son: " << endl;
	mostrarLista();
	cout << "Los numeros pares de la lista son: " << endl;
	mostrarPares();
	cout << "Los numeros impares de la lista son: " << endl;
	mostrarImpares();
	cout << "Los numeros de la lista invertidos son: " << endl;
	mostrarInvertida(pInicio);

	return 0;
}

#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;

struct Nodo {	
	float exponente;
	float coeficiente;
	Nodo *siguiente;
};

Nodo *pinicio = NULL;

float suma(Nodo*p) {
	if (p)
		return pow(p->coeficiente, p->exponente) + suma(p->siguiente);
	else
		return 0;
}

int main()
{
	float Exponente=-1, Coeficiente=-1;
	bool continuar = true;

	cout << "Ingrese Coeficiente y Exponente" << endl;
	while (continuar) {
		cout << "Coeficiente: " << endl;
		cin >> Coeficiente;
		cout << "Exponente: " << endl;
		cin >> Exponente;

		Nodo *nuevo = new Nodo;
		nuevo->coeficiente = Coeficiente;
		nuevo->exponente = Exponente;

		nuevo->siguiente = pinicio;
		pinicio = nuevo;
		cout << "Desea insertar otro numero \n\t1-) 1 para si\n\t2-) 0 para no" << endl;
		cin >> continuar;
	}
	cout << "La suma es: " << suma(pinicio);
}


// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

struct Tpila {
	float  elementos[100];
	int Top;
};
typedef struct Tpila pila;

void initialize (pila*s){
	s->Top = -1;
}

bool empty(pila*s) {
	return s->Top < 0;
}

void push(pila*s, float e) {
	if (s->Top < 99) {
		(s->Top)++;
		s->elementos[s->Top] = e;
	}
}

void pop(pila*s, float *e) {
	if (s->Top >= 0) {
		*e = s->elementos[s->Top];
		(s->Top)--;
	}
}

float ObtenerUltimoIntacto(pila*s) {
	float a[100];
	float x = 0;
	x = s->Top;
	while (!empty(s)) {
		pop(s, &a[s->Top]);
	}
	for (int i = 0; i < x; i++) {
		push(s, a[i]);
	}
	return a[0];
}

float ObtenerUltimo(pila*s) {
	float a;
	while (!empty(s)) {
		pop(s, &a);
	}
	return a;
}

int main()
{
	pila unapila;
	initialize(&unapila);
	push(&unapila, 5);
	push(&unapila, 2);
	push(&unapila, 3);
	push(&unapila, 4);
	push(&unapila, 5);
	push(&unapila, 6);

	float ultimo= ObtenerUltimoIntacto(&unapila);

	cout << "ultimo elemento del arreglo: "<<ultimo<<endl;
	cout << "los elementos en la pila son: "<<endl;
	for (int i = 0; i < unapila.Top; i++)
		cout << unapila.elementos[i]<<endl;

	ultimo = ObtenerUltimo(&unapila);
	cout << "ultimo elemento del arreglo: " << ultimo << endl;
	if (empty(&unapila))
		cout << "la pila esta vacia.";
	else
		cout << "hay elementos en la pila";

}


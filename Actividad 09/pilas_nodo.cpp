
#include "pch.h"
#include <iostream>

using namespace std;

struct nodo {
	float elemento;
	struct nodo *siguiente;
};
typedef struct nodo *pila;

void initialize(pila*s) {
	*s = NULL;
}

bool empty(pila*s) {
	return *s == NULL;
}

void push(pila*s, float e) {
	struct nodo *unnodo;
	unnodo = (struct nodo *)malloc(sizeof(struct nodo));
	unnodo->elemento = e;
	unnodo->siguiente = *s;

	*s = unnodo;
}

float pop(pila*s) {
	if (!empty(s)) {
		struct nodo *unnodo = *s;
		float e = (*s)->elemento;
		*s = (*s)->siguiente;
		delete(unnodo);
		return e;
	}
	else {
		cout << "Underflow!";
		return-1;
	}
}

float sacar2doelemento(pila*s) {
	float i = -1;
	bool segundo=false;
	if (!empty(s)) {
		for (int j = 0; j < 2; j++) {
			i = pop(s);
		}
		return i;
	}
	else
		return -1;
}

int main()
{
	float i;
	pila unapila;
	initialize(&unapila);

	push(&unapila, 1);
	push(&unapila, 2);
	//push(&unapila, 3);

	i = sacar2doelemento(&unapila);
	if (i != -1)
		cout << "El segundo valor es: " << i;
	else
		cout << "La pila no posee los elementos suficientes.";
}

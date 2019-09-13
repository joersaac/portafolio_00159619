// ejercicio 1 labo 2

#include "pch.h"
#include <iostream>

using namespace std;

string numeros;

int digitos (int n) {
	if (n < 10) 
		return 1;
	else
		return  1 + digitos(n / 10);
}

int main() {
	int numeros;
	cout << "Ingrese el numero: ";
	cin >> numeros;

	int r = digitos(numeros);

	cout << "el numero tiene: " << r << " digitos.";

	return 0;

}
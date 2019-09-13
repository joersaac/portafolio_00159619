// ejercicio 1 labo 2

#include "pch.h"
#include <iostream>

using namespace std;

int MCD(int a, int b) {
	int m;
	m = (a % b);
	if (m != 0) {
		return MCD(b, m);
	}
	else {
		return b;
	}
}

int main() {
	int a, b;
	int mayor, menor;
	cout << "Ingrese dos numeros enteros positivos: " << endl;
	cin >> a;
	cout << endl;
	cin >> b;

	if (a < 0 || b < 0) {
		cout << "Numeros ingresados no valios";
		return 0;
	}
	else {
		if (a > b)
		{
			mayor = a;
			menor = b;
		}
		else
		{
			mayor = b;
			menor = a;
		}

		cout << "El maximo comun divisor es: " << MCD(mayor, menor);
	}
}

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
/*
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
}*/
/*
int main() {
	int arr1(100);
	int arr2(100);
	int arr3(100);
	int n;

	cout << "Ingresa el numero de anillos que quieres que sea tu torre: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		arr1[i] = i + 1;
		arr2[i] = 0;
		arr3[i] = 0;
	}

}*/


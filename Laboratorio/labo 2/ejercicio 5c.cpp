//ejercicio 5c labo 2

#include "pch.h"
#include <iostream>
using namespace std;

void hanoi(int num, char A, char C, char B)
{
	if (num == 1)
	{
		cout << "Mueva el bloque " << num << " desde " << A << " hasta  " << C << endl;

	}
	else
	{
		hanoi(num - 1, A, B, C);
		cout << "Mueva el bloque " << num << " desde " << A << " hasta  " << C << endl;
		hanoi(num - 1, B, C, A);
	}
}

int main()
{
	int n;
	char A, B, C;

	cout << "Los clavijas son A B C" << endl;
	cout << "Numero de discos: ";
	cin >> n;
	hanoi(n, 'A', 'C', 'B');

}
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


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
		arr1[i] = i + 1;
		arr2[i] = 0;
		arr3[i] = 0;
	}

}*/


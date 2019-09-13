//ejercicio 16 lab 1
#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int n=0;
	int a[10];
	int contador=0;
	cout << "Ingrese 10 enteros." << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Elemento " << i << endl;
		cin >> a[i];
		contador = contador + a[i];
	}
	cout << "La sumatoria es: " << contador << endl;
	cout << "El promedio es: " << contador / 10 << endl;


	return 0;
}


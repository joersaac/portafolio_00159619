// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Joaquin Ernesto Santos Acosta 00159619
// Wilfredo Josue Morales Alfaro 00025719

#include "pch.h"
#include <iostream>

using namespace std;

int multiplicacion(int a, int b)
{
	if (b == 1)
	{
		return a;
	}
	else 
	{
		b = multiplicacion(a,b - 1);
		
		return a + b;
	}
	
}

int main()
{
	int a , b;

	cout << "Ingrese los numeros a multiplicar: " << endl;
	cin >> a;
	cout << " y ";
	cin >> b;

	int r = multiplicacion(a, b);
	
	cout <<"el resultado de la multiplicacion es: "<< r;
	return 0;
}
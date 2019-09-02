// Ejercicio 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

/float mediana(int *puntero, int tamano)
{
	float sum;
	float med;

	if (tamano % 2 == 0)
	{
		sum = (*(puntero + (tamano / 2)) + *(puntero + ((tamano / 2) - 1)));
		med = sum / 2;
	}
	else
	{
		med = *(puntero + (tamano/2));
	}
	return med;
}

int main()
{
	int arreglo[]{ 1,4,4,5,6,7,7,7 }; 
	int tamano=8;

	cout << "la mediana del arreglo es: "<<mediana(arreglo, tamano) << endl;
	
	return 0;
}

int mainn()
{
	int valor = 5;
	int*puntero = &valor;
	int**doble = &puntero;

	cout << valor << endl;
	cout << *puntero << endl;
	cout << **doble << endl << endl;
	return 0;
}



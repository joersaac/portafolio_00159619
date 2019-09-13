// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

int arreglo[]{ 1,3,4,5,17,18,31,33 };

int algoritmob(int x,int l, int h)
{
	if (l > h)
		return -1;
	int mid = (l + h) / 2;
	if (x == arreglo[mid])
		return (mid);
	else if (x<arreglo[mid])
		algoritmob(x, l, mid - 1);
	else
		algoritmob(x, mid + 1, h);
}

int main()
{
	int low = 0, high = 7,x=0;
	cout << "ingrese un numero entero positivo: " << endl;
	cin >> x;
	int i = algoritmob(x, low, high);
	if (i == -1)
		cout << "El numero ingresado no se encuentra en el arreglo" << endl;
	else
		cout << "El numero " << x << " se encuentra en la casilla no. " << i;
}



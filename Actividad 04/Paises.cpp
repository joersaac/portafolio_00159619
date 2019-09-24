// ConsoleApplication5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include<string.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
 

using namespace std;
//1-) Definicion de estructuras y arreglos.
struct Continente {
	string nombre;
	string pais[5];
	string capital[5];
	int habitantes[5];
	int habitantes2[5];
};

int  i = 0, j = 0, m = 0;
string n[5];

int main()
{
	int n=0;
	bool seguir=true;
	struct Continente continentes[5];
	//2-) Inicializacion de datos.
	continentes[0].nombre = "Asia";
	continentes[1].nombre = "Europa";
	continentes[2].nombre = "Africa";
	continentes[3].nombre = "America";
	continentes[4].nombre = "Oceania";

	//3-) Ingreso de datos.
	for (i = 0; i < 5; i++)
	{
		cout << "Para el continente de " << continentes[i].nombre << " ingrese 5 paises" << endl;
		for (j = 0; j < 5; j++) {
			cout << "Nombre del pais no. " << j + 1 << endl;
			cin >> continentes[i].pais[j];
			cout << "su capital: " << endl;
			cin >> continentes[i].capital[j];
			cout << "Su numero de habitantes totales en el pais: " << endl;
			cin >> continentes[i].habitantes[j];
			cout << "Su numero de habitantes en la capital: " << endl;
			//cin >> continentes[i].habitantes2[j];
		}
	}

	//4-) calculo de la poblacion total.
	do {
		m = 0;
		cout << "De que continente deseas saber la poblacion total? Ingresa 0 para Asia, 1 para Europa, 2 para Africa, 3 para America , 4 para Oceania,o 5 si no deseas saber ninguno?" << endl;
		cin >> n;

		if (n >= 0 && n <= 4) {
			for (j = 0; j < 5; j++)
			{
				m += continentes[n].habitantes[j];
			}
			cout << "La poblacion total de " << continentes[n].nombre << " es de: " << m << " habitantes" << endl;
		}
		else if (n == 5)
		{
			seguir = false;
		}
		else
			cout << "ERROR: el numero ingresado no es valido intenta con otro numero" << endl;
	} while (seguir);

	//5-) Capital con mayor poblacion.

	//No tengo ni idea de como hacerlo :(.

	return 0;
}



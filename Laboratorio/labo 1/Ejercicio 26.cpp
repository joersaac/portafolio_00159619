//ejercicio 26 lab 1
#include <cstdlib>
#include <iostream>
using namespace std; 
struct numeros {
	int real, imaginario;
};
int main(void) {
	numeros cifra;
	int conjugado = 0;
	cout << "Ingrese la parte real del complejo: " << endl;
	cin >> cifra.real;
	cout << "Ingrese la parte imaginaria del complejo: " << endl;
	cin >> cifra.imaginario;
	if (cifra.imaginario > 0) {
		conjugado = cifra.imaginario*(-1);
		cout << "El complejo original es: " << cifra.real << "+" << cifra.imaginario << "j" << endl;
		cout << "Su conjugada es: " << cifra.real << conjugado << "j" << endl;
	}
	else {
		conjugado = cifra.imaginario*(-1);
		cout << "El complejo original es: " << cifra.real << cifra.imaginario << "j" << endl;
		cout << "Su conjugada es: " << cifra.real << "+" << conjugado << "j" << endl;

	}
	return 0;

}

//ejercicio 8 lab 1
#include <iostream>
#include <cstdlib>

using namespace std;

void imprimir(int num, x);

int main() {
	int num;
	cout << "ingrese un numero entero positivo: " << endl;
	cin >> num;
	int x;
	x = num;

	imprimir(num, x);

    return 0;
}

void imprimir(int num, int x)
{
	if (num == 1)
		cout << 1 << endl;
	else
	{
		imprimir(num - 1, x);
		cout << num << endl;
	}
	if (num == x)
	{
		for(int i=num;i>=1;i--)
			cout<<i<<endl
	}
}


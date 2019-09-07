//ejercicio 22 lab 1

#include <iostream>
using namespace std;

int main(void) {
	int matriz[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			matriz[i][j] = 0;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == 0 && j == 0) {
				cout << "digite un numero: ";
				cin >> matriz[i][j];
				j++;
				cout << "digite un numero: ";
				cin >> matriz[i][j];
				j -= 2;
				i++;
			}
			else {
				cout << "digite un numero: ";
				cin >> matriz[i][j];
				j++;
				cout << "digite un numero: ";
				cin >> matriz[i][j];
				j++;
				cout << "digite un numero: ";
				cin >> matriz[i][j];
				j -= 2;
				i++;
			}
		}

	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << matriz[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}



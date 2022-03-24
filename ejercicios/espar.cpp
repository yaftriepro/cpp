#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int number = 0;
	
	while (0 == 0) {
	
		cout << "Escribe un numero: "; cin >> number;
	
		if (number % 2 == 0) {
			cout << number << " es par\n\n";
		} else {
			cout << number << " no es par\n\n";
		}
	
	}
	
	return 0;
}


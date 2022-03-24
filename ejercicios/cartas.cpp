// oro = 0, bastos = 1, copas = 2, espadad = 3

#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

class Carta {
	private:
		int palo = 3; 
		int numero = 12;
	public:	
		Carta(int, int);
		datos();
				
};

Carta::Carta(int _palo, int _numero) {
	palo = _palo;
	numero = _numero;
}

Carta::datos() {
	cout << "Palo: " << palo << "\nNumero: " << numero;
}

int main() {
	
	Carta velo = Carta(0, 7);
	
	velo.datos();
	
	getch();
	return 0;
}

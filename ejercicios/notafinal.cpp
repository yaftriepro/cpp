#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	cout << "Calculador de Nota final: Mate es un 50%, Lengua y Lingua un 25% cada una." << endl << endl;
	
	float mate = 0.0;
	float len = 0.0;
	float lin = 0.0;
	
	cout << "Mate: "; cin >> mate;
	cout << "Lengua: "; cin >> len;
	cout << "Lingua: "; cin >> lin;
	
	float pmate = mate * 0.5;
	float plen = len * 0.25;
	float plin = lin * 0.25;
	
	float notafinal = pmate + plin + plen;
	
	cout << endl << "Nota final: " << notafinal << endl;
	
	getch();
	return 0;
}

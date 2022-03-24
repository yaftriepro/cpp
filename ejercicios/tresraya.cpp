#include <iostream>
#include <conio.h>

using namespace std;

int board() {
	int table[5][5] = { 
		{ 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }, 
		{ 0, 0, 0, 0, 0 }, { 0, 0, 0, 0, 0 }
	};
	
	int x = 0;
	int y = 0;
	
	cout << "X: "; cin >> x;
	cout << "Y: "; cin >> y;
	
	table[x][y] = 1;
		
	cout << endl << " " << table[0][0] << " | " << table[0][1] << " | " << table[0][2] << " | " << table[0][3] << " | " << table[0][4] << endl;
	cout << " " << table[1][0] << " | " << table[1][1] << " | " << table[1][2] << " | " << table[1][3] << " | " << table[1][4] << endl;
	cout << " " << table[2][0] << " | " << table[2][1] << " | " << table[2][2] << " | " << table[2][3] << " | " << table[2][4] << endl;
	cout << " " << table[3][0] << " | " << table[3][1] << " | " << table[3][2] << " | " << table[3][3] << " | " << table[3][4] << endl;
	cout << " " << table[4][0] << " | " << table[4][1] << " | " << table[4][2] << " | " << table[4][3] << " | " << table[4][4] << endl << endl;
	
	return 0;
}

int main() {
	while(true) { board(); }

	return 0;
}



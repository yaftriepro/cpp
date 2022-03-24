#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int a;
	int b;
	int c;
	int d;
	
	cout << "form: ( a + b ) / ( c + d)" << endl << endl;
	
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	cout << "c: "; cin >> c;
	cout << "d: "; cin >> d;
	
	cout << endl;
	
	int a_b = a+b;
	int c_d = c+d;
	int r = a_b / c_d;
	
	cout << a << " + " << b << " = " << a_b << endl;
	cout << c << " + " << d << " = " << c_d << endl;
	cout << a_b << " / " << c_d << " = " << r << endl;
	
	getch();
	return 0;
}

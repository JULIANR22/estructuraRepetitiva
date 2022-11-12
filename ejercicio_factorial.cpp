#include<iostream>
using namespace std;
int main() {
	int factorial, x, n ;
	cout << "Ingrese un numero " << endl;
	cin >> n;
	if (n<0) {
		cout << "El numero no se puede factorizar " << endl;
	} else {
		x = 1;
		factorial = 1;
		while (x<=n) {
			factorial = factorial*x;
			x = x+1;
		}
		cout << "El factorial del numero " << n << " = " << factorial << endl;
	}
	return 0;
}


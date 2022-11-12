#include<iostream>
using namespace std;

int main() {
	int n, num1, num2, n_campos, suma, x;
	cout << "Ingresa el numero de campos " << endl;
	cin >> n_campos;
	x = 1;
	while (x<=n_campos) {
		cout << "Ingresa un numero " << endl;
		cin >> n;
		if (x==1) {
			num1 = n;
			num2 = n;
		} else {
			if (n>num1) {
				num1 = n;
			} else {
				if (n<num2) {
					num2 = n;
				}
			}
		}
		x = x+1;
	}
	suma = num1+num2;
	cout << "El numero mayor es: " << num1 << endl;
	cout << "El numero menor es: " << num2 << endl;
	cout << "La suma total es:" << suma << endl;
	return 0;
}


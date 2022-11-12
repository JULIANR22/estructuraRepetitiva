#include<iostream>
using namespace std;


int main() {
	int i, n, num1, num2, num3;
	cout << "Ingresa numero " << endl;
	cin >> n;
	num1 = 0;
	num2 = 1;
	for (i=1;i<=n;i++) {
		cout << num1 << endl;
		num3 = num1+num2;
		num1 = num2;
		num2 = num3;
	}
	return 0;
}


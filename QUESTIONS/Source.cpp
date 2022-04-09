#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL,"Russian");
	int n;
	int PI = 3.14;
	int a = 20;
	int b = 30;
	cout << "¬ведите число(1 или 0):";
	cin >> n;
	cout << endl;
	switch (n) {
		case 1: cout << PI * (b - a); break;
		case 2: cout << a * b / PI; break;
		default: "ERROR";
	}

	return 0;
}
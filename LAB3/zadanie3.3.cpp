#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double A, B, C;
	cout << "Podaj wspolczynniki rownania kwadratowego (Ax^2 + Bx + C):" << endl;
	cout << "A: ";
	cin >> A;
	cout << "B: ";
	cin >> B;
	cout << "C: ";
	cin >> C;

	cout << "Rownanie kwadratowe ma postac: " << A << "x^2 + " << B << "x + " << C << " = 0" << endl;

	double delta = B * B - 4 * A * C;

	if (delta > 0) {
		double x1 = (-B + sqrt(delta)) / (2 * A);
		double x2 = (-B - sqrt(delta)) / (2 * A);
		cout << "Rownanie ma dwa pierwiastki (miejsca zerowe):" << endl;
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	else if (delta == 0) {
		double x = -B / (2 * A);
		cout << "Rownanie ma jeden pierwiastek (miejsce zerowe):" << endl;
		cout << "x = " << x << endl;
	}
	else {
		cout << "Rownanie nie ma pierwiastkow." << endl;
	}

	return 0;
}

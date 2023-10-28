

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{

	float x, y;
	cout << "Podaj pierwsza liczbe (x): ";
	cin >> x;
	cout << "Podaj druga liczbe (y): ";
	cin >> y;

	float suma = x + y;
	float roznica = x - y;
	float iloczyn = x * y;

	float iloraz;
	if (y != 0) {
		iloraz = x / y;
	}
	else {
		cout << "Nie można dzielić przez zero" << endl;
		return 0;
	}

	cout << "Suma: " << suma << endl;
	cout << "Roznica: " << roznica << endl;
	cout << "Iloczyn: " << iloczyn << endl;

	printf("Iloraz: %.2f\n", iloraz);

	return 0;


}


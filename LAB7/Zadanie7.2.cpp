#include <iostream>

using namespace std;

unsigned int silnia(unsigned int liczba) {
	if (liczba == 0) {
		return 1;
	}
	return liczba * silnia(liczba - 1);
}



int main()
{
	unsigned int liczba;
	cout << "Witaj!\nPodaj liczbe, ktorej silnie oblicze i powiem, przez co ta liczba sie dzieli: ";
	cin >> liczba;
	cout << "Silnia z " << liczba << " to: " << silnia(liczba) << endl << "Wynik jest podzielny przez:" << endl;

	if (silnia(liczba)%2 == 0)
	{
		cout << "2\n";
	}

	if (silnia(liczba) % 3 == 0)
	{
		cout << "3\n";
	}

	if (silnia(liczba) % 5 == 0)
	{
		cout << "5\n";
	}

	if (silnia(liczba) % 11 == 0)
	{
		cout << "11\n";
	}
}

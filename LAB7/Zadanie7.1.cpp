#include <iostream>

using namespace std;

int main()
{
    cout << "Witaj!\n";

    string arr[4][4];
    int j = 0;

    for (int i = 0; i < 3; i++) {
        j = i + 1;
        cout << "\nPodaj imie " << i +1 << " osoby: ";
        cin >> arr[i][i];

        cout << "Podaj nazwisko " << i + 1 << " osoby: ";
        cin >> arr[i][j];
    }

    cout << "\nImiona i Nazwiska trzech osob: \n";

    for (int i = 0; i < 3; i++) {
        j = i + 1;
        cout << arr[i][i] << " ";
        cout << arr[i][j] << " \n";
    }

}

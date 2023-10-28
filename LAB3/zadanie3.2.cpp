#include <iostream>
using namespace std;

int main() {
    char znak;

    cout << "Wprowadzaj znaki z klawiatury. Wpisz 't', aby zakonczyc." << endl;

    do {
        cout << "Podaj znak: ";
        cin >> znak;
        cout << "Wprowadzony znak: " << znak << endl;
    } while (znak != 't');

    cout << "Program zakonczony. Wprowadzono znak 't'." << endl;

    return 0;
}

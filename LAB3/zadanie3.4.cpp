#include <iostream>
using namespace std;

int main() {
    int liczbaWierszy;

    cout << "Podaj liczbe wierszy trojkata Pascala: ";
    cin >> liczbaWierszy;

    for (int i = 0; i < liczbaWierszy; ++i) {
        int wspolczynnik = 1;

        for (int j = 0; j <= i; ++j) {
            cout << wspolczynnik << " ";
            wspolczynnik = wspolczynnik * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}

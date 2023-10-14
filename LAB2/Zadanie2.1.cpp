
#include <iostream>

using namespace std;

int liczenieSzeregu(int n) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            sum += j;
        }
    }
    return sum;
}

int main()
{
    int n;
    cout << "Podaj ilosc liczb do zsumowania: ";
    cin >> n;
    cout << endl;

    int wynik = liczenieSzeregu(n);
    cout << "Wynik szeregu dla " << n << " : " << wynik << endl;

    return 0;
}


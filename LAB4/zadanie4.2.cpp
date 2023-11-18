#include <iostream>

using namespace std;

const int MAX_SIZE = 10; // Maksymalny rozmiar tablicy

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;


    int* arr = new int[n];


    cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int counts[MAX_SIZE] = { 0 };

    int mostFrequentElement = arr[0];
    int maxCount = 1;
    bool unique = true;

    for (int i = 0; i < n; ++i) {
        int currentCount = 1;
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] == arr[j]) {
                currentCount++;
            }
        }
        if (currentCount > maxCount) {
            maxCount = currentCount;
            mostFrequentElement = arr[i];
            unique = true;
        }
        else if (currentCount == maxCount && arr[i] != mostFrequentElement) {
            unique = false;
        }
    }

    if (unique) {
        cout << "Najczesciej wystepujacy element to: " << mostFrequentElement << endl;
    }
    else {
        cout << "Nie ma jednoznacznie najczesciej wystepujacego elementu." << endl;
    }


    return 0;
}

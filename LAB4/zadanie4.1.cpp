#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;

    int *arr = new int[n];

    std::cout << "Podaj elementy tablicy:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int max_element = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    cout << "Najwiekszy element w tablicy to: " << max_element << std::endl;

    return 0;
}

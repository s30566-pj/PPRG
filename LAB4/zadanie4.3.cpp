#include <iostream>

int main() {
    const int rows = 10;
    const int cols = 2;

    int tablica[rows][cols];

    for (int i = 0; i < rows; ++i) {
        tablica[i][0] = i;
    }

    for (int i = 0; i < rows; ++i) {
        tablica[i][1] = tablica[i][0] + tablica[i][0];
    }

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << tablica[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
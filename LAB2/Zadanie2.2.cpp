
#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << endl << "Podaj liczbe b: ";
    cin >> b;

    cout << endl << "Wiersz o dlugsci a: " << endl;

    for (int i = 0; i < a; ++i)
    {
        cout << "*";
    }

    cout << endl << endl << "Kolumna o dlugosci b: " << endl;

    for (int i = 0; i < a; ++i)
    {
        cout << "*" << endl;
    }

    cout << endl << endl << "Wypelniony prostokat gwiazdek o wymiarach 'a' na 'b': " << endl;

    for (int i = 0; i < a; ++i)
    {
        for (int i = 0; i < a; ++i)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << "Obramowanie prostokatu gwiazdek: " << endl;

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < b; ++j) {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
            {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl << endl << "Trojkat prostokatny rownoramienny z katem prostym w lewym dolnym rogu: " << endl;

    for (int i = 1; i <= a; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << endl << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu: " << endl;

    for (int i = 0; i < a; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << " ";
        }
        for (int k = i; k < a; ++k)
        {
            cout << "*";
        }
        cout << endl;
    }
}
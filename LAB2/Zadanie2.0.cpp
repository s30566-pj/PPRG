
#include <iostream>

using namespace std;

int main()
{
    int pizza_slices;
    int people;
    cout << "===PIZZA CUTTER===";
    cout << endl << "Podaj ilosc kawalkow pizzy: ";
    cin >> pizza_slices;
    cout << endl << "Podaj ilosc uczestnikow imprezy: ";
    cin >> people;
    cout << endl << "Dzielenie pizzy..." << endl;
    int for_organizator = pizza_slices % people;
    int for_others = pizza_slices / (pizza_slices - (pizza_slices % people));
    cout << "Ilosc kawalkow dla uczestnikow: " << for_others << endl << " Dla organizatora: " << for_organizator;
}



#include <iostream>

using namespace std;

int main()
{
    int month;
    cout << "Podaj numer miesiaca: ";
    cin >> month;
    cout << endl;

    switch (month) {
        case 1:
            cout << "Miesiac: Styczen" << endl << "Ilosc dni: 31" << endl << "Pogoda: Pochmurno";
            break;
        case 2:
            cout << "Miesiac: Luty" << endl << "Ilosc dni: 28" << endl << "Pogoda: Pochmurno";
            break;
        case 3:
            cout << "Miesiac: Marzec" << endl << "Ilosc dni: 31" << endl << "Pogoda: Pochmurno";
            break;
        case 4:
            cout << "Miesiac: Kwiecien" << endl << "Ilosc dni: 30" << endl << "Pogoda: Slonecznie";
            break;
        case 5:
            cout << "Miesiac: Maj" << endl << "Ilosc dni: 31" << endl << "Pogoda: Slonecznie";
            break;
        case 6:
            cout << "Miesiac: Czerwiec" << endl << "Ilosc dni: 30" << endl << "Pogoda: Slonecznie";
            break;
        case 7:
            cout << "Miesiac: Lipiec" << endl << "Ilosc dni: 31" << endl << "Pogoda: Slonecznie";
            break;
        case 8:
            cout << "Miesiac: Sierpien" << endl << "Ilosc dni: 31" << endl << "Pogoda: Slonecznie";
            break;
        case 9:
            cout << "Miesiac: Wrzesien" << endl << "Ilosc dni: 30" << endl << "Pogoda: Slonecznie";
            break;
        case 10:
            cout << "Miesiac: Pazdziernik" << endl << "Ilosc dni: 31" << endl << "Pogoda: Pochmurno";
            break;
        case 11:
            cout << "Miesiac: Listopad" << endl << "Ilosc dni: 30" << endl << "Pogoda: Pochmurno";
            break;
        case 12:
            cout << "Miesiac: Grudzien" << endl << "Ilosc dni: 31" << endl << "Pogoda: Pochmurno";
            break;
        default:
            cout << "Nie wiem gdzie mieszkasz, ale rok na pewno nie ma tylu miesiecy...";
            break;
            return 0;
    }
}

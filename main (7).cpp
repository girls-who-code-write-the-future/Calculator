#include <iostream>
#include <cstdlib> // dla exit()
using namespace std;

float x;
float y;
char wybor;

int main() {
    while (true) { // Nieskończona pętla
        cout << "Podaj pierwsza liczbe: ";
        cin >> x;
        cout << "Podaj druga liczbe: ";
        cin >> y;

        cout << endl << "MENU GLOWNE" << endl;
        cout << "-----------" << endl;
        cout << "1. DODAWANIE" << endl;
        cout << "2. ODEJMOWANIE" << endl;
        cout << "3. MNOZENIE" << endl;
        cout << "4. DZIELENIE" << endl;
        cout << "5. Koniec programu" << endl;

        cout << "Wybierz opcje: ";
        cin >> wybor;

        switch (wybor) {
            case '1':
                cout << "Wynik: " << x + y << endl;
                break;
            case '2':
                cout << "Wynik: " << x - y << endl;
                break;
            case '3':
                cout << "Wynik: " << x * y << endl;
                break;
            case '4':
                if (y == 0) 
                    cout << "Nie mozna dzielic przez 0!" << endl;
                else 
                    cout << "Wynik: " << x / y << endl;
                break;
            case '5':
                cout << "Koniec programu." << endl;
                exit(0);
            default:
                cout << "Nie ma takiej opcji w menu!" << endl;
        }
        cout << endl << "Nacisnij Enter, aby kontynuowac..." << endl;
        cin.ignore(); // Pomija nową linię po wyborze
        cin.get();    // Czeka na wciśnięcie klawisza Enter
        system("cls"); // Czyszczenie ekranu (opcjonalnie)
    }

    return 0;
}

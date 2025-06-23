#include <iostream>
#include "Auto.h"
#include "Autofunkcje.h"

using namespace std;


int main() {
    int opcja;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Dodaj Auto\n";
        cout << "2. Pokaz wszystkie Auta\n";
        cout << "3. Pokaz Auto od ID\n";
        cout << "4. Usun Auto od ID\n";
        cout << "5. Zapisz Auta do pliku\n";
        cout << "0. Exit\n";
        cout << "Wybierz opcje: ";
        cin >> opcja;\

        switch (opcja) {
            case 1: dodajAuto(); break;
            case 2: pokazWszystkieAuta(); break;
            case 3: pokazAutoid(); break;
            case 4: usunAutoid(); break;
            case 5: zapiszDoPliku(); break;
            case 0: cout << "Wyjście\n"; break;
            default: cout << "Opcja nie poprawna wybierz prawdziwa opcje\n"; break;
        }
    } while (opcja != 0);
    return 0;
}

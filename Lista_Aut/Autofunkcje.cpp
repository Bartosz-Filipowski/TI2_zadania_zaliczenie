#include <iostream>
#include <fstream>
#include "Autofunkcje.h"
#include <string>

using namespace std;

const int maks_aut = 100;
Auto Auta[maks_aut];
int iloscAut = 0;

void dodajAuto() {
    if (iloscAut >= maks_aut) {
        cout<< "osiagnieto maksymalna ilosc Aut w bazie. \n";
        return;
    }
    string marka, kolor, rejestracja;
    int rokProdukcji, przebieg;

    cout<<"Podaj Marke: ";
    cin >> marka;
    cout<<"Podaj Kolor: ";
    cin >> kolor;
    cout<<"Podaj Rejestracje: ";
    cin >> rejestracja;
    cout<<"Podaj rokProdukcji: ";
    cin >> rokProdukcji;
    cout<<"Podaj przebieg: ";
    cin >> przebieg;

    Auta[iloscAut] = Auto(marka, kolor, rejestracja, rokProdukcji, przebieg);
    iloscAut++;
    cout << "Auto dodane z ID: " << Auta[iloscAut-1].getId() << endl;
}

void pokazWszystkieAuta() {
    if (iloscAut ==0) {
        cout<< "Brak aut w bazie. \n";
        return;
    }
    for (int i = 0; i < iloscAut; i++) {
        Auta[i].display();
    }
}

void pokazAutoid() {
    int id;
    cout << "Podaj id: ";
    cin >> id;

    for (int i = 0; i < iloscAut; i++) {
        if (Auta[i].getId() == id) {
            Auta[i].display();
            return;
        }
    }
    cout<< "Brak auta w bazie. \n";
}
void usunAutoid() {
    int id;
    cout << "Podaj id auta do usuniecia: ";
    cin>>id;
     for (int i = 0; i < iloscAut; i++) {
         if (Auta[i].getId() == id) {
             for (int j = i; j < iloscAut - 1; j++) {
                 Auta[j] = Auta[j+1];
             }
             iloscAut--;
             cout << "Auto usuniete. \n";
             return;
         }
     }
cout << "Brak auta w bazie. \n";
}

void zapiszDoPliku() {
    ofstream file("BazaAut.txt");
    if (!file) {
        cout<<"Nie można otworzyć pliku do zapisu. \n";
        return;
    }
    for (int i = 0; i < iloscAut; i++) {
        file << Auta[i].getId()<< " ";
        file << Auta[i].getMarka() << " ";
       file  << Auta[i].getKolor() << " ";
       file << Auta[i].getRejestracja() << " ";
       file << Auta[i].getRokProdukcji() << " " ;
       file << Auta[i].getPrzebieg() << "km\n" ;
    }
    file.close();
    cout << "auta zapisane do pliku BazaAut.txt \n";

}

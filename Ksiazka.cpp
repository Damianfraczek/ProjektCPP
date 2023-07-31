#include "Ksiazka.h"
#include <iostream>
using namespace std;

Ksiazka::Ksiazka() {
    cout << "Prosze podac tytul ksiazki: ";
    cin.get();
    cin.getline(tytul, 1000);
    cout << "Prosze podac nazwisko autora: ";
    cin.getline(autor_nazw, 50);
    cout << "Prosze podac imie autora: ";
    cin.getline(autor_imie, 20);
    cout << "Prosze podac wydawnictwo: ";
    cin.getline(wydawnictwo, 50);
    cout << "Prosze podac cene: ";
    cin >> cena;
    cout << "Prosze podac rok wydania: ";
    cin >> rok_wyd;
    cout << endl << endl;

}

void Ksiazka::wyswietl() {
    cout << endl << "Tytul: \t" << tytul << endl;
    cout << "Autor: \t" << autor_imie << " " << autor_nazw << endl;
    cout << "Cena: \t" << cena << endl;
    cout << "Rok wyd.: \t" << rok_wyd << endl;
    cout << "Wydawnictwo: \t" << wydawnictwo << endl << endl;
}



char *Ksiazka::getTytul() {
    return tytul;
}
char* Ksiazka::getNazwisko() {
    return autor_nazw;
}
char* Ksiazka::getImie() {
    return autor_imie;
}
char* Ksiazka::getWydawnictwo() {
    return wydawnictwo;
}

int Ksiazka::getCena()
{
    return cena;
}
int Ksiazka::getRokWyd()
{
    return rok_wyd;
}

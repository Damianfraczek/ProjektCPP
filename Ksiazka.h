#ifndef Ksiazka_h
#define Ksiazka_h
#include <iostream>
using namespace std;

class Ksiazka
{
    char tytul[1000];
    char autor_nazw[50];
    char autor_imie[20];
    char wydawnictwo[50];
    int cena;
    int rok_wyd;
public:
    Ksiazka();
    void wyswietl();
    char *getTytul() ;
    char *getNazwisko();
    char *getImie();
    char *getWydawnictwo();
    int getCena();
    int getRokWyd();
    
};
#endif


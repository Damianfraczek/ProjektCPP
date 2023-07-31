#include "Ksiazka.h"
#include "List.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    List lista;
    int wybor = 0;
    while (1)
    {
        system("CLS");
        cout << "Prosze wybrac jedna z opcji:" << endl;
        cout << "1. Dodaj ksiazke do listy" << endl;
        cout << "2. Wypisz liste" << endl;
        cout << "3. Wypisz ksiazke" << endl;
        cout << "4. Usun ksiazke z listy" << endl;
        cout << "5. Sortuj liste po roku wydania" << endl;
        cout << "6. Sortuj po imieniu autora" << endl;
        cout << "7. Sortuj po nazwisku autora" << endl;
        cout << "8. Zakoncz program" << endl;
        cin >> wybor;
        switch (wybor)
        {
        case 1:
            lista.dodaj_ksiazke();
            system("pause");
            break;
        case 2:
            lista.pokaz_liste();
            system("pause");
            break;
        case 3:
            lista.wypisz_ksiazke();
            system("pause");
            break;
        case 4:
            lista.usun_ksiazke();
            system("pause");
            break;
        case 5:
            lista.sortuj_data();
            system("pause");
            break;
        case 6:
            lista.sortuj_imie();
            system("pause");
            break;
        case 7:
            lista.sortuj_nazwisko();
            system("pause");
            break;
        case 8:
            lista.clearList();
            system("pause");
            return 0;
        default:
            cout << "Nie ma takiej opcji:" << wybor << endl;
            system("pause");
        }
    }

    return 0;
}


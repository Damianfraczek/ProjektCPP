#ifndef lista_hpp
#define lista_hpp

#include "book.hpp"

typedef bool( * metoda )( Book *l, Book *p );

bool metoda_tytul(Book *l, Book *p);
bool metoda_nazw(Book *l, Book *p);
bool metoda_rok_wyd(Book *l, Book *p);
int porownanie(char*a, char*b);

class Lista{
    public:
        Book *s_ptr = NULL;
        Book *l_ptr = NULL;

        void sortowanie();
        void dodaj_ksiazke();
        void wypisz_ksiazke();
        void wypisz_liste();
        void usun_ksiazke();
        void usun_liste();
};

#endif // lista_hpp

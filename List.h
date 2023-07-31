#ifndef List_h
#define List_h
#include <iostream>
#include "Ksiazka.h"
using namespace std;
struct ElemList
{
	ElemList* prev, * next;
	Ksiazka data;
};

class List
{
private:
	ElemList* head, * tail;
	int size;
public:
	List();
	~List();
	void clearList();
	void dodaj_ksiazke();
	void pokaz_liste() const;
	int getSize() const;
	void wypisz_ksiazke();
	void usun_ksiazke();
	void sortuj_data();
	void sortuj_imie();
	void sortuj_nazwisko();
	bool porownaj(char s1[], char s2[], int dlugosc);
};
#endif

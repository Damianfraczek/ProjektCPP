#include "Ksiazka.h"
#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	head = tail = NULL;
	size = 0;
}

List::~List()
{
	if (size != 0)
	{
		ElemList* p = head;

		while (p)
		{
			ElemList* next = p->next;
			delete p;
			p = next;
		}
		size = 0;
		head = tail = NULL;
	}
	else
	{
		return;
	}
}

void List::clearList()
{
	if (size != 0)
	{
		ElemList* p = head;

		while (p)
		{
			ElemList* next = p->next;
			delete p;
			p = next;
		}
		size = 0;
		head = tail = NULL;
	}
	else
	{
		return;
	}
}

void List::dodaj_ksiazke()
{
	ElemList* p = new ElemList;
	p->next = NULL;
	p->prev = tail;
	if (tail != NULL)
	{
		tail->next = p;
	}
	else {
		head = p;
	}
	tail = p;
	size++;

}

void List::pokaz_liste() const
{
	if(head==NULL)
		cout << "Lista jest pusta" << endl << endl;
	ElemList* p = head;
	while (p)
	{
		p->data.wyswietl();
		p = p->next;
	}
}

int List::getSize() const
{
	return size;
}

void List::wypisz_ksiazke() {
	int rok;
	cout << "Podaj rok wydania ksiazki: ";
	cin >> rok;
	if (head == NULL)
	{
		cout << "Lista jest pusta" << endl << endl;
		return;
	}
	ElemList* p = head;

	while (p)
	{
		if (p->data.getRokWyd() == rok)   // Znalezlismy ksiazke
		{
			p->data.wyswietl();
		}
		else if (p->data.getRokWyd() != rok) cout << "Nie ma takiej ksiazki." << endl;
		p = p->next;
	}
	return;
}

void List::usun_ksiazke() {
	int rok;
	cout << "Podaj rok wydania ksiazki: ";
	cin >> rok;
	if (head == NULL)
	{
		cout << "Lista jest pusta" << endl << endl;
		return;
	}
	ElemList* p = head;

	while (p)
	{
		if (p->data.getRokWyd() == rok)   // Znalezlismy ksiazke
		{
			if (p->prev == NULL) {
				head = p->next;
			}
			else
				p->prev->next = p->next;
			delete p;
			size--;
			return;
		}
	
		else cout << "Nie ma takiej ksiazki." << endl;
		p = p->next;
	}
	return;
}

void List::sortuj_data() {
	int size = getSize();
	if (size < 2)
	{
		cout << "lista jest zbyt krotka, zeby ja sortowac" << endl << endl;
		return;
	}
	ElemList* temp1 = NULL;
	ElemList* temp2 = NULL;

	Ksiazka k = head->data;
	for (temp1 = head; temp1 != nullptr; temp1 = temp1->next) {
		for (temp2 = head; temp2 != nullptr; temp2 = temp2->next) {
			if (temp1->data.getRokWyd() > temp2->data.getRokWyd()) {
				k = temp1->data;
				temp1->data = temp2->data;
				temp2->data = k;
			}
		}
	}
}

void List::sortuj_imie() {
	int size = getSize();
	if (size < 2)
	{
		cout << "lista jest zbyt krotka, zeby ja sortowac" << endl << endl;
		return;
	}
	ElemList* temp1 = NULL;
	ElemList* temp2 = NULL;

	Ksiazka k = head->data;
	for (temp1 = head; temp1 != nullptr; temp1 = temp1->next) {
		for (temp2 = head; temp2 != nullptr; temp2 = temp2->next) {
			if (porownaj(temp1->data.getImie(), temp2->data.getImie(), 20)) {
				k = temp1->data;
				temp1->data = temp2->data;
				temp2->data = k;
			}
		}
	}
}
bool List::porownaj(char s1[] , char s2[] , int dlugosc)
	{
		int i = 0;
		while (i < dlugosc)
		{
			if (s1[i] < s2[i])
				return true;
			else if (s1[i] > s2[i])
				return false;
			else
				i++;
		}
		return true;
	}
	
void List::sortuj_nazwisko() {
	int size = getSize();
	if (size < 2)
	{
		cout << "lista jest zbyt krotka, zeby ja sortowac" << endl << endl;
		return;
	}
	ElemList* temp1 = NULL;
	ElemList* temp2 = NULL;

	Ksiazka k = head->data;
	for (temp1 = head; temp1 != nullptr; temp1 = temp1->next) {
		for (temp2 = head; temp2 != nullptr; temp2 = temp2->next) {
			if (porownaj(temp1->data.getNazwisko(), temp2->data.getNazwisko(), 50)) {
				k = temp1->data;
				temp1->data = temp2->data;
				temp2->data = k;
			}
		}
	}
}
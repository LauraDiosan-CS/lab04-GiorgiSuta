#include "UI.h"
#include <iostream>
#include <string>
#include "functii.h"

using namespace std;

void UI::addProdus() {
	char* nume = new char[100];
	char* data = new char[100];
	int pret;
	cout << "Dati un nume: " << endl;
	cin >> nume;
	cout << "Dati o data: " << endl;
	cin >> data;
	cout << "Dati un pret: " << endl;
	cin >> pret;
	this->service.addProdus(nume, data, pret);

}
void UI :: deleteProdus() {
	char nume[100];
	cout << "Dati un nume de sters: " << endl;
	cin >> nume;
	char data[10] = " ";
	int pret = 0;
	Produs produs(nume, data, pret);
	this->service.deleteProdus(produs);
}
void UI::updateProdus() {
	char* nume = new char[100];
	char* data = new char[100];
	int pret;
	cout << "Dati un nume: " << endl;
	cin >> nume;
	cout << "Dati o data: " << endl;
	cin >> data;
	cout << "Dati un pret: " << endl;
	cin >> pret;
	this->service.updateProdus(nume, data, pret);
}
void UI::afisareProduse() {
	int n = this->service.getSize();
	Produs* produse = this->service.getAll();
	for (int i = 0;i < n;i++)
		cout << produse[i] << endl;
}

void UI::filterProduse() {
	int n = 0;
	int pret;
	cout << "Dati pretul: " << endl;
	cin >> pret;
	Produs* listaNoua = service.filterProduse(pret, n);
	for (int i = 0; i < n; i++)
	{
		cout << listaNoua[i] << endl;
	}
}
void UI::reducereProduse() {
	char* data = new char[100];
	cout << "Dati data dorita: ";
	cin >> data;
	service.reducereProduse(data);
}
void UI::run() {
	int optiune;
	bool ok = true;
	Produs* undoList = new Produs[0];
	while (ok == true)
	{
		cout << endl << "Optiunile sunt:  " << endl;
		menu();
		cout << "Optiunea este: " << endl;
		cin >> optiune;
		if (optiune == 1)
			this->addProdus();
		if (optiune == 2)
			this->afisareProduse();
		if (optiune == 3)
			this->deleteProdus();
		if (optiune == 4)
			this->updateProdus();
		if (optiune == 5)
			this->filterProduse();
		if (optiune == 6)
			this->reducereProduse();
		if (optiune == 7)
			this->service.undoProdus();
		if (optiune == 0)
			break;

	}
}
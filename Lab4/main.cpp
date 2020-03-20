#include <iostream>
#include "produs.h"
#include "test.h"
#include "repo.h"

using namespace std;

void menu() {
	cout << "1. Adauga produs" << endl;
	cout << "2. Afisare produse " << endl;
	cout << "3. Stergere produs" << endl;
	cout << "4. Modificare produs" << endl;
	cout << "0. Exit" << endl;

}

int main() {
	MyTest();
	Produs produse[100];
	Repo rep;
	int n= rep.size();
	int optiune = 1;
	while (optiune)
	{
		menu();
		cout << "Optiunea este: " << endl;
		cin >> optiune;
		if (optiune == 1) {
			char nume[100];
			cout << " Numele este:  " << endl;
			cin >> nume;
			char data[100];
			cout << " Data este: ";
			cin >> data;
			int pret;
			cout << "Pretul este: " << endl;
			cin >> pret;
			Produs p1(nume, data, pret);
			produse[n++] = p1;
			rep.addProdus(p1);
		}
		if (optiune == 2)
		{
			for (int i = 0;i < rep.size(); i++)
			{
				cout <<  rep.getAll()[i] << endl;
			}
		}
		if (optiune == 3)
		{
			char nume[100];
			cout << " Dati numele de sters: " << endl;
			cin >> nume;
			char data[50] = " ";
			int pret = 0;
			Produs p(nume,data, pret);
			rep.deleteProdus(p);
		}
		if (optiune == 0)
			break;
	}
}

	
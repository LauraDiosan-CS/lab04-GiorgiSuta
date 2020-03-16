#include <iostream>
#include "produs.h"
#include "test.h"
#include "repo.h"

using namespace std;

void menu() {
	cout << "1. Adauga produs" << endl;
	cout << "2. Afisare produs" << endl;
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
			int pret;
			cout << "Pretul este: ";
			cin >> pret;
			Produs p1(pret);
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
		if (optiune == 0)
			break;


	}
}

	
#include "repo.h"
#include <iostream>
using namespace std;

Repo::Repo() {
	this->n = 0;
}

void Repo::addProdus(const Produs& p)
{
	this->produse[this->n++] = p;
}
void Repo::deleteProdus(const Produs& p)
{
	for (int i = 0;i < n;i++) {
		if (produse[i] == p)
		{
			produse[i] = produse[n - 1];
			n--;
			break;
		}
	}
}
void Repo::updateProdus(const Produs& p, char* n, char* d, int pret)
{
	int i = findProdus(p);
	produse[i].setNume(n);
	produse[i].setData(d);
	produse[i].setPret(pret);
	
}
int Repo::findProdus(const Produs& p)
{
	for (int i = 0;i < n;i++)
	{
		if (produse[i] == p)
			return i;
	}
	return -1;
}
Produs* Repo::getAll() {
	return this->produse;
}
int Repo::size() {
	return n;
}
Repo::~Repo() {
	this->n = 0;
}

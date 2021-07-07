#include "repo.h"
#include <iostream>
using namespace std;

Repo::Repo() {
	this->n = 0;
}

void Repo::addProdus( Produs p)
{
	this->produse[this->n++] = p;
}
void Repo::deleteProdus(Produs p)
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
void Repo::updateProdus( Produs p )
{
	int n = this->size();
	Produs* produse = this->getAll();
	for (int i = 0;i < n;i++)
	{
		if (strcmp(p.getNume(), produse[i].getNume()) == 0)
			produse[i] = p;
	}
	
}
int Repo::findProdus(Produs p)
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
	return this->n;
}
Repo::~Repo() {
	this->n = 0;
}

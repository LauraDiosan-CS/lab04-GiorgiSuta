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

Produs* Repo::getAll() {
	return this->produse;
}
int Repo::size() {
	return n;
}
Repo::~Repo() {
	this->n = 0;
}

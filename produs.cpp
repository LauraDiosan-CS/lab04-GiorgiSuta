#include <iostream>
#include <string.h>
#include "produs.h"
using namespace std;
Produs::Produs() {
	pret = 0;
}
Produs:: Produs(int pret)
{
	this->pret = pret;
}
Produs::Produs(const Produs& p)
{
	this->pret = p.pret;

}
int Produs::getPret()
{
	return this->pret;
}


void Produs::setPret(int pret) {
	this->pret = pret;
}

Produs& Produs:: operator=(const Produs& p)
{
	if (this == &p)
		return *this;
	this->setPret(p.pret);
	return *this;
}
bool Produs:: operator == (const Produs& p)
{
	if (pret == p.pret)
		return true;
	return false;
}
Produs::~Produs() {
	pret = 0;
}
ostream& operator<<(ostream& os, const Produs& p)
{
	os << "Produs - " <<  p.pret;
	return os;
}
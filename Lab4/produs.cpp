#include <iostream>
#include <string.h>
#include "produs.h"
using namespace std;
Produs::Produs() {
	nume = NULL;
	data = NULL;
	pret = 0;
}
Produs:: Produs(char* nume, char* data, int pret)
{
	this->nume = new char[strlen(nume) + 1];
	strcpy_s(this->nume, strlen(nume) + 1, nume);
	this->data = new char[strlen(data) + 1];
	strcpy_s(this->data, strlen(data) + 1, data);
	this->pret = pret;
}
Produs::Produs(const Produs& p)
{
	this->nume = new char[strlen(p.nume) + 1];
	strcpy_s(this->nume, 1 + strlen(p.nume), p.nume);
	this->data = new char[strlen(p.data) + 1];
	strcpy_s(this->data, 1 + strlen(p.data), p.data);
	this->pret = p.pret;

}
char* Produs::getNume() {
	return this->nume;
}
char* Produs::getData() {
	return this->data;
}
int Produs::getPret()
{
	return this->pret;
}
void Produs::setNume(char* n)
{
	if (nume)
		delete[] nume;
	nume = new char[strlen(n) + 1];
	strcpy_s(nume, strlen(n) + 1, n);
}
void Produs::setData(char* d)
{
	if (data)
		delete[] data;
	data = new char[strlen(d) + 1];
	strcpy_s(data, strlen(d) + 1, d);
}

void Produs::setPret(int pret) {
	this->pret = pret;
}

Produs& Produs:: operator=(const Produs& p)
{
	if (this == &p)
		return *this;
	if (nume) delete[] nume;
	nume = new char[strlen(p.nume) + 1];
	strcpy_s(nume, strlen(p.nume) + 1, p.nume);
	if (data) delete[] data;
	data = new char[strlen(p.data) + 1];
	strcpy_s(data, strlen(p.data) + 1, p.data);
	pret = p.pret;
	return *this;
}
bool Produs:: operator == (const Produs& p)
{
	if (strcmp(nume, p.nume) == 0)
		return true;
	return false;

}
Produs::~Produs() {
	if (this->nume != NULL)
		delete[] nume;
	this->nume = NULL;
	if (this->data != NULL)
		delete[] data;
	this->data = NULL;
	pret = 0;
}
ostream& operator<<(ostream& os, const Produs& p)
{
	os << "Produs - " << p.nume<< "-"<<p.data<<"-"<< p.pret;
	return os;
}
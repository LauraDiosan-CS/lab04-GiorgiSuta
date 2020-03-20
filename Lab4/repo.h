#pragma once
#include "produs.h"

class Repo {
private:
	Produs produse[100];
	int n;
public:
	Repo();
	void addProdus(const Produs&);
	void deleteProdus(const Produs&);
	void updateProdus(const Produs&, char*, char*, int);
	Produs* getAll();
	int findProdus(const Produs&);
	~Repo();
	int size();
};
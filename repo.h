#pragma once
#include "produs.h"

class Repo {
private:
	Produs produse[100];
	int n;
public:
	Repo();
	void addProdus(const Produs&);
	Produs* getAll();
	~Repo();
	int size();
};
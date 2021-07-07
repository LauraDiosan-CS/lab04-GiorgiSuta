#pragma once
#include "produs.h"

class Repo {
private:
	Produs produse[100];
	int n;
public:
	Repo();
	void addProdus(Produs);
	void deleteProdus(Produs);
	void updateProdus(Produs);
	Produs* getAll();
	int findProdus(Produs);
	~Repo();
	int size();
	
};
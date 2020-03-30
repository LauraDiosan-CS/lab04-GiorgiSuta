#pragma once
#include "repo.h"
#include "RepoUndo.h"
class Service {
private:
	Repo r;
	RepoUndo repoUndo;
public:
	
	Produs* getAll();
	int getSize();
	void addProdus(char* n, char* d, int p);
	void deleteProdus(Produs p);
	void updateProdus( char* , char*, int);
	void undoProdus();
	Produs* filterProduse(int, int &n);
	int findProdus(Produs p);
	void reducereProduse(char*);
	void addRepoUndo(char*, Produs);
	void revenireReducere(char*);
	void revenireAdaugare(char*);
	~Service();
};
#include "service.h"
#include "RepoUndo.h"
#include "functii.h"
void Service::addProdus(char* n, char* d, int p) {
	Produs produs(n, d, p);
	Undo undo(4, produs);
	repoUndo.add(undo);
	r.addProdus(produs);
	
}

int Service::getSize() {
	return this->r.size();
}
Produs* Service::getAll() {
	return this->r.getAll();
}
void Service::deleteProdus(Produs p)
{
	Undo undo(3, p);
	repoUndo.add(undo);
	this->r.deleteProdus(p);
	
}
void Service::updateProdus(  char* numeNou, char* dataNoua, int pretNou)
{
	Produs produs(numeNou, dataNoua, pretNou);
	Produs* produse = this->r.getAll();
	Undo undo;
	for (int i = 0;i < this->r.size();i++) {
		if (strcmp(numeNou, produse[i].getNume()) == 0) {
			undo = Undo(2, produse[i]);
			i = this->r.size();
		}
	}
	this->repoUndo.add(undo);
	this->r.updateProdus(produs);

}
Produs* Service::filterProduse(int pret, int &n)
{
	Produs* listaNoua = new Produs[100];
	Produs* produse = this->r.getAll();
	for (int i = 0; i < this->r.size();i++) {
		if (produse[i].getPret() > pret) {
			listaNoua[n++] = produse[i];
		}
	}
	return listaNoua;
}
void Service::reducereProduse(char* data)
{
	Produs* produse = this->r.getAll();
	for (int i = 0;i < this->r.size(); i++) {
		if (comparereData(produse[i].getData(), data) == true) {
			int pretCurent = produse[i].getPret();
			int pretNou = (90*pretCurent) / 100;
			this->addRepoUndo(data, produse[i]);
			produse[i].setPret(pretNou);
		}
	}

}
void Service::addRepoUndo(char* data, Produs produs) {
	Produs produs1(produs.getNume(), data, produs.getPret());
	Undo undo(1, produs1);
	repoUndo.add(undo);
}
void Service::revenireAdaugare(char* nume)
{
	Produs* produse = this->r.getAll();
	for (int i = 0; i < this->r.size();i++)
	{
		if (strcmp(nume, produse[i].getNume()) == 0)
		{
			this->r.deleteProdus(produse[i]);
		}
	}
}
int Service::findProdus(Produs p) {
	return this->r.findProdus(p);
}
void Service::revenireReducere(char* data)
{
	int n = this->getSize();
	Produs* produse = this->getAll();
	Produs produs;
	int ok = 1;
	for (int i = 0;i < n;i++)
	{
		if (comparereData(produse[i].getData(), data) == true) {
			int pretCurent = produse[i].getPret();
			int pretNou = (pretCurent * 100) / 90;
			produse[i].setPret(pretNou);
		}
	}
}
void Service::undoProdus() {
	Undo undo_end = repoUndo.end();
	if (undo_end.getI() == 4) {
		this->revenireAdaugare(undo_end.getProdus().getNume());
		repoUndo.reducereN();
	}
	if (undo_end.getI() == 3) {
		this->r.addProdus(undo_end.getProdus());
		repoUndo.reducereN();
	}
	if (undo_end.getI() == 2)
	{
		this->r.updateProdus(undo_end.getProdus());
		repoUndo.reducereN();
	}
	if (undo_end.getI() == 1)
	{
		this->revenireReducere(undo_end.getProdus().getData());
		repoUndo.reducereN();
	}
}
Service :: ~Service() {
	
}


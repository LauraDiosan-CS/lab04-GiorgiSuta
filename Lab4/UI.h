#pragma once
#include "service.h"
class UI {
private:
	Service service;
	void addProdus();
	void deleteProdus();
	void updateProdus();
	void afisareProduse();
	void filterProduse();
	void reducereProduse();
	
public:
	void run();
};

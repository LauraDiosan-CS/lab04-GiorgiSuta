#pragma once
#include "produs.h"

class Undo {
private:
	int i;
	Produs produs;
public:
	Undo();
	Undo(int, Produs);
	Undo(const Undo&);
	int getI();
	void setI(int);
	Produs getProdus();
	Undo& operator = (const Undo&);
	~Undo();
};
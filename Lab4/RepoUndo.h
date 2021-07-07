#pragma once
#include "undo.h"

class RepoUndo {
private:
	Undo lista[100];
	int n;
public:
	RepoUndo();
	~RepoUndo();
	void add(Undo);
	void reducereN();
	Undo end();
};
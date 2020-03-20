#include "test.h"
#include <assert.h>
#include <iostream>
#include "repo.h"
#include <cassert>

using namespace std;

void MyTest() {
	int pret = 15;
	char nume[20] = "Giorgi";
	char data[20] = "12.02.2020";
	Repo rep;
	assert(rep.size() == 0);
	Produs p1(nume, data, pret);
	rep.addProdus(p1);
	assert(rep.size() == 1);
	assert(p1.getPret() == 15);
	
}
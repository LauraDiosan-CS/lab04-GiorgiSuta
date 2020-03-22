#include "test.h"
#include <assert.h>
#include <iostream>
#include <string.h>
#include "repo.h"
#include <cassert>

using namespace std;

void MyTest() {
	int pret = 15;
	char nume[100] = "Dulap";
	char data[100] = "12.02.2020";
	Repo rep;
	assert(rep.size() == 0);
	Produs p1(nume, data, pret);
	rep.addProdus(p1);
	assert(rep.size() == 1);
	assert(p1.getPret() == 15);
	assert(strcmp(p1.getNume(), nume) == 0);
	assert(strcmp(p1.getData(), data) == 0);
	int i = rep.findProdus(p1);
	char numenou[100] = "Birou";
	char datanoua[100] = "27.02.2017";
	int pretnou = 100;
	rep.updateProdus(p1, numenou, datanoua, pretnou);
	
	assert(rep.getAll()[i].getPret() == pretnou);
	cout << p1;
	
}
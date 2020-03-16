#include "test.h"
#include <assert.h>
#include <iostream>
#include "repo.h"
#include <cassert>

using namespace std;

void MyTest() {
	int pret = 15;
	Repo rep;
	assert(rep.size() == 0);
	Produs p1(pret);
	rep.addProdus(p1);
	assert(rep.size() == 1);
	assert(p1.getPret() == 15);
	
}
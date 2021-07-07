#include "test.h"
#include <assert.h>
#include <iostream>
#include <string.h>
#include "repo.h"
#include <cassert>
#include "service.h"

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
	char numenou[100] = "Birou";
	char datanoua[100] = "27.02.2017";
	int pretnou = 100;
	Produs p2(nume, datanoua, pretnou);
	rep.updateProdus(p2);
	

}
void TestService() {
	Repo rep;
	Service service;
	char nume[100] = "dulap";
	char data[100] = "12.02.2020";
	int pret = 100;
	service.addProdus(nume, data, pret);
	Produs p1(nume, data, pret);
	assert(service.getSize() == 1);
	char nume1[100] = "laptop";
	char data1[100] = "15.02.2020";
	int pret1 = 3000;
	service.addProdus(nume1, data1, pret1);
	Produs p2(nume1, data1, pret1);
	int n = 0;
	service.filterProduse(50, n);
	assert(n == 2);
	char data2[100] = "13.02.2020";
	int i = service.findProdus(p1);
	service.reducereProduse(data2);
	assert(service.getAll()[i].getPret() == 90);
	service.deleteProdus(p2);
	service.deleteProdus(p1);
	assert(service.getSize() == 0);
	
}
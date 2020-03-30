#include "functii.h"
#include <iostream>
#include <string.h>
using namespace std;
void menu() {
	cout << "1. Adaugare produs" << endl;
	cout << "2. Afisare produse: " << endl;
	cout << "3. Stergere produs" << endl;
	cout << "4. Modificare produs " << endl;
	cout << "5. Filtrare produse " << endl;
	cout << "6. Reducere produse" << endl;
	cout << "7. Undo" << endl;
	cout << "0. Exit" << endl;
}

bool comparereData(char*  data1, char* data2)
{
	char* next_token1 = NULL;
	char* token1 = NULL;
	token1 = strtok_s(data1, ".", &next_token1);
	int zi1 = int(token1[0]);
	int luna1 = int(token1[1]);
	int an1 = int(token1[2]);
	char* next_token2 = NULL;
	char* token2 = NULL;
	token2 = strtok_s(data2, ".", &next_token2);
	int zi2 = int(token2[0]);
	int luna2 = int(token2[1]);
	int an2 = int(token2[2]);
	if (an1 <= an2)
		return true;
	if (an1 == an2 && luna1 <= luna2)
		return true;
	if (an1 == an2 && luna1 == luna2 && zi1 <= zi2)
		return true;
	return false;
}
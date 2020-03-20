#pragma once
#include <ostream>
using namespace std;
class Produs{
private:
	char* nume;
	char* data;
	int pret;
public:
	Produs();
	Produs(char*, char*, int);
	Produs(const Produs&);
	char* getNume();
	char* getData();
	int getPret();
	void setNume(char*);
	void setData(char*);
	void setPret(int);
	Produs& operator= (const Produs&);
	bool operator == (const Produs&);
	~Produs();
	friend ostream& operator<<(ostream& os, const Produs& p);
};
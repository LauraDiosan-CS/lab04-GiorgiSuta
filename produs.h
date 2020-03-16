#pragma once
#include <ostream>
using namespace std;
class Produs{
private:
	int pret;
public:
	Produs();
	Produs(int);
	Produs(const Produs&);
	int getPret();
	void setPret(int);
	Produs& operator= (const Produs&);
	bool operator == (const Produs&);
	~Produs();
	friend ostream& operator<<(ostream& os, const Produs& p);
};
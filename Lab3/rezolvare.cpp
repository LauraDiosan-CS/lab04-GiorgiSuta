#include "rezolvare.h"
#include <iostream>
using namespace std;

int *citire(int& n)
{
	cout << "Dati lungimea: ";
	cin >> n;
	int* v = new int[100];
	for (int i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];
	}
	return v;
}

void afisare(int *v, int start, int n)
{
	for (int i = start; i <= n; i++)
	{
		cout << v[i] << ' ';
	}
	cout << endl;
}

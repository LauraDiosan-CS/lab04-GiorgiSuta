// Lab3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "rezolvare.h"
using namespace std;
void menu()
{
    cout << "1. Citirea vectorului " << endl;
    cout << "2. Afisarea vectorului" << endl;
    cout << "0. Inchiderea aplicatiei" << endl;
}

int main()
{
    int n;
    int optiune = 1;
    menu();
    int *v= new int[100];
    while (optiune)
    {
        cout << "Optiunea este: " << endl;
        cin >> optiune;
        if (optiune == 1)
            v = citire(n);
        if (optiune == 2)
            afisare(v, 1, n);
        if (optiune == 0)
            break;
    }
}


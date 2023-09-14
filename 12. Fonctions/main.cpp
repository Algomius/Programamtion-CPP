#include <iostream>
#include "fonc.h"
using namespace std;



int main()
{
    int a, b;

    cout << "Entrer un nombre : " << endl;
    cin >> a;

    cout << "Entrer un autre nombre : " << endl;
    cin >> b;

    cout << "Le plus petit est " << minimum(a, b);
}
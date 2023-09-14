#include <iostream>
using namespace std;

int minimum(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    cout << "Entrer un nombre : " << endl;
    cin >> a;

    cout << "Entrer un autre nombre : " << endl;
    cin >> b;

    cout << "Le plus petit est " << minimum(a, b);
}
#include <iostream>
using namespace std;

void echange(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void echange_ref(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int main()
{
    int a, b;

    cout << "Entrer un nombre : " << endl;
    cin >> a;

    cout << "Entrer un autre nombre : " << endl;
    cin >> b;

    cout << "a : " << a << " b : " << b << endl;

    echange_ref(a, b);

    cout << "a : " << a << " b : " << b << endl;
}
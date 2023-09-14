#include <iostream>
using namespace std;

void init(int tab[10])
{
    for(int i = 0; i < 10;i++)
        tab[i] = 5;
}

void affiche(int tab[10])
{
    for(int i = 0; i < 10;i++)
        cout << tab[i] << endl;
}

int moyenne(int tab[10], int taille)
{
    double m = 0;

    for(int i = 0; i < taille;i++)
        m += tab[i];

    return(m/taille);
}

int main()
{
    int t[10];

    init(t);
    affiche(t);
    cout << "Moyenne " << moyenne(t, 10) << endl;
}
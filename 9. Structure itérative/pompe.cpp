#include <iostream>
using namespace std;

int main()
{
    int ePersonne = 120;
    int ePompe = 11;

    while (ePersonne >= ePompe)
    {
        cout << "Une pompe" << endl;
        ePersonne -= ePompe;
    }
}

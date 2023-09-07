#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Donner un nombre a tester" << endl;
    cin >> n;
    if (n % 2 == 0)
        cout << "pair" << endl;
    else
        cout << "impair" << endl;
        cout << "je ne suis pas dans le if" << endl;
}

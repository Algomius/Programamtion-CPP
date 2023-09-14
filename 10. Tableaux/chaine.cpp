#include <iostream>
using namespace std;

int main()
{
    char c1 [12] = {'C', 'o', 'u', 'c', 'o', 'u'};
    char c2 [12] = "Coucou";

    cout << c1 << "-" << endl;
    cout << c2 << "-" << endl;

    c2[2] = '\0';
    cout << c2 << "-" << endl;

}
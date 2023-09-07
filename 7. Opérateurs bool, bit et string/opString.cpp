#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "";
    string s2 = "";
    string c = "";

    cout << "Donner la valeur du 1er mot " << endl;
    cin >> s1;

    cout << "Donner la valeur du 2eme mot " << endl;
    cin >> s2;

    if (s1 < s2) 
    {
        c = s1 + s2;
    } 
    else
    {
        c = s2 + s1;
    }


    cout << "Nouvelle chaine " << c << endl; 
    cout << "Taille de la nouvelle chaine " << c.size() << endl; 
}
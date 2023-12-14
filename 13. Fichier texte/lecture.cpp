#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string s;
    ifstream monFichier("data.txt");
    while (getline(monFichier, s)) {
        cout << "Nombre de charactères lus" << monFichier.gcount() << endl;
        cout << s << endl;
    }
    monFichier.close();
}
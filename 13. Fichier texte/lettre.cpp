#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream monFichier("data.txt", ios::in);
    char c;
    while (monFichier.get(c)) {
        cout << c << endl;
    }
    monFichier.close();
}
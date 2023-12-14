#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    fstream monFichier("data.txt", ios::in);
    monFichier.seekg(6, ios::beg);
    //char s[6];
    //char *s = (char *)malloc(6*sizeof(char));
    char * s = new char[100];

    monFichier.read(s, 5);
    cout << s << endl;
    monFichier.seekg(-16, ios::end);
    monFichier.read(s, 5);
    cout << s << endl;
    monFichier.close();
    delete[] s;
    // free(s);
}
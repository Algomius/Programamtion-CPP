#include <iostream>
using namespace std;

int main() {
    int ok = 0;
    int info = 1;
    int warning = 2;
    int erreur = 4;
    int fatal = 8;

    int warningFatal = warning + fatal;

    cout << "Warning + fatal " << warningFatal << endl;

    int test1 = erreur + fatal + info;

    if (test1 & (erreur + fatal)) {
        cout << "Erreur + fatal" << endl;
    }

    int test2 = fatal + info;

    if ((test2 & erreur) | (test2 & fatal) ) {
        cout << "Erreur ou fatal" << endl;
    }
}
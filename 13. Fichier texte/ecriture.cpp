#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream monFichier("data.txt");
    monFichier << "Et voila, un joli contenu pour mon fichier";
    monFichier.close();
}
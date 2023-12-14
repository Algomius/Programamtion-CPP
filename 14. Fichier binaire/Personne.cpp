#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Personne {
    string nom;
    string prenom;
    int age;

    public:
        Personne(string n, string p, int a ){
            nom = n;
            prenom = p;
            age = a;
        }

        void affichage() {
            cout << nom << " - " << prenom << " - " << age << endl;
        }
};

int main() {
    Personne *p = new Personne("Marley", "Bob", 45);
    fstream monFichier("data.txt", ios::out | ios::binary);
    monFichier.write((char *) p, sizeof(Personne));
    monFichier.close();

    Personne *p1 = (Personne *)malloc(sizeof(Personne));
    fstream monFichierIn("data.txt", ios::in | ios::binary);
    monFichierIn.read((char *) p1, sizeof(Personne));
    monFichierIn.close();
    p1->affichage();
    free(p1);

}
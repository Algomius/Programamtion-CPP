#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

class Cours {
    string nom;
    string isin;
    double coursOuverture;
    double coursCloture;

    public:
        Cours(string n, string i, double o, double c ){
            nom = n;
            isin = i;
            coursOuverture = o;
            coursCloture = c;
        }

        bool augmente() {
            return coursCloture >= coursOuverture;
        }

        void affichage() {
            cout << nom << " - " << isin << " - " << coursOuverture << " - " << coursCloture << endl;
        }
};

int main() {
    vector<Cours *> v;

    string s, col;
    fstream monFichier("Euronext_Equities_2023-12-12.csv", ios::in);
    vector<Cours *> v_cours;
    int indice = 1;
    while (getline(monFichier, s)) {
        if (indice > 4) {
            s.erase(remove(s.begin(), s.end(), '\"'), s.end());
            stringstream ligne(s);
            vector<string> v;
            while (getline(ligne, col, ';')) {
                v.push_back(col);
            }

            cout << v[0] << " - "  << v[1] << " - " << v[5] << " - "  << v[8] << endl;


            if (v[5].find('.') != string::npos && v[8].find('.') != string::npos) {
                v_cours.push_back(new Cours(v[0], v[1], stof(v[5]), stof(v[8])));
            }
        }
        indice ++;
    }

    for (auto e : v_cours) {
        if (e->augmente()) {
            e->affichage();
        }
    }
}
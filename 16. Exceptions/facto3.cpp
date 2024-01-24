#include <iostream>
#include <string>
using namespace std;

class FactorielException : public exception {
    int param;

    public : 
        FactorielException(int n) {
            param = n;
        }

        string what() {
            return ("Factorielle est valide sur un nombre positif non nul uniquement. Valeur fausse : " + to_string(param));
        }
};


int facto(int n) {
    if (n <= 0) {
        throw FactorielException(n);
    }
    else if (n > 1000) {
        throw to_string(n) + " est trop grand";
    }
    else if (n == 1) 
    {
        return (1);
    }
    else {
        return (n*facto(n-1));
    }
}

int main() {
    try {
        cout << facto(-5) << endl;
    } catch(FactorielException e) {
        cout << "Negatif : " << e.what() << endl;
    } catch(string s) {
        cout << "Trop grand : " << s << endl;
    }
    cout << "Fin" << endl;
}
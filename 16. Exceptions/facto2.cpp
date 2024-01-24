#include <iostream>
#include <string>
using namespace std;


int facto(int n) {
    if (n <= 0) {
        throw n;
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
        cout << facto(5000) << endl;
    } catch(int x) {
        cout << "Negatif : " << x << endl;
    } catch(string s) {
        cout << "Trop grand : " << s << endl;
    }
    cout << "Fin" << endl;
}
#include <iostream>
#include <string>
using namespace std;


int facto(int n) {
    if (n <= 0) {
        throw invalid_argument(to_string(n) + " est un nombre negatif ou nul");
    }
    else if (n > 1000) {
        throw out_of_range(to_string(n) + " est trop grand");
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
    } catch(invalid_argument &e) {
        cout << "Negatif : " << e.what() << endl;
    } catch(out_of_range &e) {
        cout << "Trop grand : " << e.what() << endl;
    }
    cout << "Fin" << endl;
}
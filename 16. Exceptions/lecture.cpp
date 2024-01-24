#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "coucou";
    try {
        cout << s.at(17) << endl;
    } catch(out_of_range &e) {
        cout << "Je suis dans le catch" << endl;
        cout << e.what() << endl;
    } catch(exception &e) {
        cout << "Encore une exception mais pas out of range" << endl;
    }
    cout << "coucou" << endl;
}
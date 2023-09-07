#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float c1 = 0;
    float c2 = 0;

    cout << "Donner la valeur du 1er cote " << endl;
    cin >> c1;

    cout << "Donner la valeur du 2eme cote " << endl;
    cin >> c2;

    cout << "Longeur du troisieme cote " << round(sqrt(pow(c1, 2) + pow(c2, 2))*100)/100 << endl; 
}
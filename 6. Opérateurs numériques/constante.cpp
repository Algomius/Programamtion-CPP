#include <iostream>
#include <numbers>
using namespace std;

int main() {
    float r = 0;

    cout << "Donner la valeur du rayon " << endl;
    cin >> r;

    cout << "Le diametre du cercle est de " << r * r * std::numbers::pi << endl; 
}
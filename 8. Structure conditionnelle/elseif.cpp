#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Donner un age" << endl;
    cin >> age;
    if (age < 3)
        cout << "bebe" << endl;
    else if (age < 12)
        cout << "enfant" << endl;
    else if (age < 18)
        cout << "adolescent" << endl;
    else if (age < 70)
        cout << "adulte" << endl;
    else
        cout << "troisieme age" << endl;
}

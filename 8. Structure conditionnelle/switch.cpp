#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Quelle est la fonction demandees ? " << endl;
    cin >> n;
    switch(n) {
        case 1:
            cout << "Ecouter vos messages" << endl;
            break;
        case 2:
            cout << "Supprimer vos messages" << endl;
            break;
        default:
            cout << "Je n'ai pas compris votre selection" << endl;
            break;

    }
}

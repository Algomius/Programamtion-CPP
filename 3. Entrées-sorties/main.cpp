#include <iostream>

using namespace std;

int main()
{
    char nom[20];
    int age;
    float taille;

    cout << "Entrer votre nom : " << endl;
    cin >> nom;
    cout << "Entrer votre age : " << endl;
    cin >> age;
    cout << "Entrer votre taille : " << endl;
    cin >> taille;
    cout << "Bonjour " << nom << " vous avez " << age << " ans et vous mesurez " << taille << " metres" << endl;
    if (age >= 0)
    {
        cout << "Vous etes ne en " << 2022 - age << endl;
    }
    else
    {
        cerr << "Votre age semble incorrect" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    const int TAILLE_TABLEAU = 10;
    int t1[TAILLE_TABLEAU] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int i = 0;i < TAILLE_TABLEAU;i++)
        cout << t1[i] << endl;

    
    t1[25] = 5;

}
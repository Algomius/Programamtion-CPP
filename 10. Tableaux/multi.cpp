#include <iostream>
using namespace std;

int main()
{
    const int DIMENSION = 11;

    int table [DIMENSION] [DIMENSION];

    for (int i = 0; i < DIMENSION ; i++ )
    {
        for (int j = 0 ; j< DIMENSION ; j++)
        {
            table[i][j] = i * j;
        }

    }

    cout << table[7][8] << endl;

}
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int *adr_int;

    adr_int = &n;
    *adr_int = 8;

    cout << n << endl;
}
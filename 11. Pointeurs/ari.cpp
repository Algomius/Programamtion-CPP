#include <iostream>
using namespace std;

int main()
{
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p1;
    int *p2;

    p1 = &t[0];
    p2 = &t[5];

    cout << *p1 << " - " << *(p1 + 3) << " - " << *(p1 + 5) << endl;
    cout << p2 - p1 << endl;

    cout << t[0]  << " - " << *t << endl;
    cout << t[5]  << " - " << *(t+5) << endl;
}
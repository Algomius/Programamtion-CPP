#include <iostream>
using namespace std;

int main()
{
    int t1[20];
    cout << sizeof(int) << " - " << sizeof(t1) << endl;

    const int t2[] = {1, 2, 3, 4, 5};
    t1[0] = 45;
    //t2[0] = 27;

    cout << t2[17] << endl;

}
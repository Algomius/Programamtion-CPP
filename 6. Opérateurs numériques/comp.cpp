#include <iostream>
using namespace std;

int main() {
    int i = 4;
    int a = i++;

    cout << a << " " << i << endl;

    i = 4;
    a = ++i;

    cout << a << " " << i << endl;

}
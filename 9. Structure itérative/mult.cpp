#include <iostream>
using namespace std;

int main()
{
    for (unsigned int op1 = 1; op1 <= 10; op1++ )
    {
        for (unsigned int op2 = 1; op2 <= 10; op2 ++)
        {
            cout << op1 << " * " << op2 << " = " << op1 * op2 << endl;
        }
    }
}

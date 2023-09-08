#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5, 9, 47, 28, 32, 7};

    for (unsigned int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << endl;
    }

    for (auto & element : vec)
    {
        cout << element << endl;
    }

}

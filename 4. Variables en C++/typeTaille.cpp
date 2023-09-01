#include <iostream>

int main() {
    short s;
	signed int i;
	i = 3000000000;
	std::cout << i << " - " << sizeof(i) << std::endl;
	long j;
	long long k;
    k = 4300000000;
    std::cout << k << " - " << sizeof(k) << std::endl;
	std::cout << sizeof(s) << sizeof(i) << sizeof(j) << sizeof(k) << std::endl;

    bool b = false;
    std::cout << sizeof(b);
}
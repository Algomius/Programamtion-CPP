#include <iostream>
#include <typeinfo>

int main() {
    auto s = "blabla";
    std::cout << typeid(s).name() << std::endl;
}
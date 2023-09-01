#include <iostream>
#include <string>

int main() {
    std::string s1 = "123";
    std::string s2 = "456";
    std::cout << std::stoi(s1) + std::stoi(s2) << std::endl;
}
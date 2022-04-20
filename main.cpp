#include <iostream>

double add(double num1, double num2);

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << add(5,4) << std::endl;
    return 0;
}

double add(double num1, double num2) {
    return num1 + num2;
}

#include "Calculator.h"
#include <iostream>

int main() {
    std::cout << "666 + 888 = " << Calculator::add(666, 888) << std::endl;
    std::cout << "888 - 666 = " << Calculator::subtract(888, 666) << std::endl;
    return 0;
}
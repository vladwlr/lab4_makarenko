#include "fuzzynumber.h"
#include <iostream>

int main() {
    FuzzyNumber a;
    FuzzyNumber b(1.0, 2.0, 3.0);

    a.Read();

    std::cout << "Object a: " << a << std::endl;
    std::cout << "Object b: " << b << std::endl;

    FuzzyNumber sum = a + b;
    std::cout << "Sum of a and b: " << sum << std::endl;

    FuzzyNumber product = a * b;
    std::cout << "Product of a and  b : " << product << std::endl;

    bool equal = (a == b);
    std::cout << "a and b are equal: " << (equal ? "true" : "false") << std::endl;

    return 0;
}

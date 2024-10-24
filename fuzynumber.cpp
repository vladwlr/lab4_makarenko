#include "fuzzynumber.h"
#include <iostream>
#include <string>

FuzzyNumber::FuzzyNumber() : left(0), mid(0), right(0) {}

FuzzyNumber::FuzzyNumber(double value) : left(value - 1), mid(value), right(value + 1) {}

FuzzyNumber::FuzzyNumber(double l, double m, double r) : left(l), mid(m), right(r) {}

void FuzzyNumber::Read() {
    std::cout << "Enter left, mid, and right values A: ";
    std::cin >> left >> mid >> right;
}

void FuzzyNumber::Display() const {
    std::cout << "(" << left << ", " << mid << ", " << right << ")" << std::endl;
}

// Перевантаження оператора додавання
FuzzyNumber FuzzyNumber::operator+(const FuzzyNumber& other) const {
    return FuzzyNumber(left + other.left, mid + other.mid, right + other.right);
}

// Перевантаження оператора множення
FuzzyNumber FuzzyNumber::operator*(const FuzzyNumber& other) const {
    return FuzzyNumber(left * other.left, mid * other.mid, right * other.right);
}

// Перевантаження оператора рівності
bool FuzzyNumber::operator==(const FuzzyNumber& other) const {
    return (left == other.left) && (mid == other.mid) && (right == other.right);
}

// Перевантаження оператора виведення
std::ostream& operator<<(std::ostream& os, const FuzzyNumber& fn) {
    os << "(" << fn.left << ", " << fn.mid << ", " << fn.right << ")";
    return os;
}

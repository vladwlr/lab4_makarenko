#ifndef FUZZYNUMBER_H
#define FUZZYNUMBER_H

#include <iostream>
#include <string>

class FuzzyNumber {
private:
    double left;
    double mid;
    double right;

public:
    FuzzyNumber();
    FuzzyNumber(double value);
    FuzzyNumber(double left, double mid, double right);

    void Read();
    void Display() const;
    std::string toString() const;

    // Перевантажені оператори
    FuzzyNumber operator+(const FuzzyNumber& other) const;
    FuzzyNumber operator*(const FuzzyNumber& other) const;
    bool operator==(const FuzzyNumber& other) const;

    // Перевантаження оператора виведення
    friend std::ostream& operator<<(std::ostream& os, const FuzzyNumber& fn);
};

#endif

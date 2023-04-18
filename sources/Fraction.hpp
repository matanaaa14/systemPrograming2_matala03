#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

namespace ariel{}

class Fraction {
public:
    int numerator, denominator;
    Fraction(int, int);
    Fraction operator+(const Fraction& other);
    Fraction operator+(const double num);
    friend Fraction operator+(const double d, const Fraction& f);

    Fraction operator-(const Fraction& other);
    Fraction operator-(const int num);

    Fraction operator*(const Fraction& other);
    friend Fraction operator*(double dob, const Fraction& frac);

    Fraction operator/(const Fraction& other);

    bool operator==(const Fraction& other);
    bool operator==(const double num);

    bool operator<(const Fraction& other);
    bool operator<=(const Fraction& other);
    bool operator>(const Fraction& other);
    bool operator>(const double num);
    bool operator>=(const Fraction& other);

    Fraction& operator++();
    Fraction operator++(int);
    Fraction& operator--();
    Fraction operator--(int);

    Fraction operator>>(const Fraction& other);

    friend std::ostream& operator<<(std::ostream& os, const Fraction& other);
};



#endif
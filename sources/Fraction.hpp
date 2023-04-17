#ifndef FRACTION_HPP
#define FRACTION_HPP
using namespace std;
#include <iostream>
namespace ariel{

}
class Fraction{
    public:
    int numerator,denominator;
    Fraction operator+(const Fraction& other);
    friend Fraction operator+(const double d, const Fraction& f);
    Fraction operator+(double);
    Fraction operator-(const Fraction& other);
    Fraction operator-(int num);
    Fraction operator*(const Fraction& other);
    friend Fraction operator*(double dob, const Fraction& frac);
    Fraction operator/(const Fraction& other);
    Fraction operator==(const Fraction& other);
    Fraction operator==(const double);
    Fraction operator<(const Fraction& other);
    Fraction operator<=(const Fraction& other);
    Fraction operator>(const Fraction& other);
    bool operator>(double);
    Fraction operator>=(const Fraction& other);
    Fraction& operator++();
    Fraction operator++(int);
    Fraction operator--();
    Fraction operator--(int);
    Fraction operator>>(const Fraction& other);
    friend ostream& operator<<(ostream& os,const Fraction& other);
    friend ostream& operator<<(const Fraction& other, ostream& os);
    Fraction(int,int);
};




#endif
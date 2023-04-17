#include "doctest.h"
#include <iostream>
#include "sources/Fraction.hpp"

TEST_CASE("test constructor"){
    Fraction f(1,2);
    CHECK(f.denominator == 2);
    CHECK(f.numerator == 1);
}
TEST_CASE("test +"){
    Fraction f1(1,4);
    Fraction f2(2,4);
    Fraction f3(3,4);
    CHECK(f1 + f2 == f3);
    CHECK(f1 + 2 == 2.25);
    CHECK(3.75 + f1 == 4);
}

TEST_CASE("test -"){
    Fraction f1(1,4);
    Fraction f2(2,4);
    Fraction f3(3,4);
    CHECK(f3 - f2 == f1);
}

TEST_CASE("test *"){
    Fraction f1(1,4);
    Fraction f2(2,4);
    Fraction f3(2,16);
    CHECK(f1 * f2 == f3);
}

TEST_CASE("test /"){
    Fraction f1(1,4);
    Fraction f2(2,4);
    Fraction f3(2,16);
    CHECK(f3 / f1 == f2);
}

TEST_CASE("test ++"){
    Fraction f1(1,4);
    Fraction f2(1,4);
    Fraction f5(5,4);
    Fraction f3 = f1++;
    Fraction f4 = ++f2; 
    CHECK(f5 == f3);
    CHECK(f5 == f4);
}

TEST_CASE("test --"){
    Fraction f1(5,4);
    Fraction f2(5,4);
    Fraction f4(1,4);
    Fraction f3 = f1--;
    Fraction f5 = --f2;
    CHECK(f4 == f3);
    CHECK(f4 == f5);
}


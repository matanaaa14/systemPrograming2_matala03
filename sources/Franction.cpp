#include "Fraction.hpp"
#include <iostream>

using namespace std;

namespace ariel{}
    // implementation of member functions
    Fraction Fraction::operator+(const Fraction& other){
      Fraction f(1,2);
      return f;
    }
    
    Fraction Fraction::operator+(const double num){
      Fraction f(1,2);
      return f;}
    
    Fraction Fraction::operator-(const Fraction& other){
      Fraction f(1,2);
      return f;    }
    
    Fraction Fraction::operator-(int num){
      Fraction f(1,2);
      return f;    }
    
    Fraction Fraction::operator*(const Fraction& other){
      Fraction f(1,2);
      return f;    }
    
    Fraction Fraction::operator/(const Fraction& other){
      Fraction f(1,2);
      return f;    }
    
    bool Fraction::operator==(const Fraction& other){
      return false;
    }
    
    bool Fraction::operator==(const double num){
      return false;
    }
    
    bool Fraction::operator<(const Fraction& other){
      return false;
    }
    
    bool Fraction::operator<=(const Fraction& other){
      return false;
    }
    
    bool Fraction::operator>(const Fraction& other){
      return false;
    }
    
    bool Fraction::operator>(double num){
      return false;
    }
    
    bool Fraction::operator>=(const Fraction& other){
      return false;
    }
    
    Fraction& Fraction::operator++(){
      Fraction& f2 = this;
      return f2;

    }
    
    /*/Fraction& Fraction::operator++(int){
        // implementation here
    }/*/
    
    Fraction& Fraction::operator--(){
        // implementation here
    }
    /*/
    Fraction& Fraction::operator--(int){
        // implementation here
    }/*/
    
    Fraction Fraction::operator>>(const Fraction& other){
      Fraction f(1,2);
      return f;      }
    
    ostream& operator<<(ostream& os,const Fraction& other){
        ostream& stam = cout;
        stam << "hello" <<endl;
        return stam;
      }
    
    // implementation of friend functions
    Fraction operator+(const double num,const Fraction& f){
      Fraction f(1,2);
      return f;     }
    
    Fraction operator-(const Fraction& other){
      Fraction f(1,2);
      return f;     }
    
    Fraction operator-(int num, const Fraction& f){
      Fraction f(1,2);
      return f;     }
    
    Fraction operator*(double num, const Fraction& f){
      Fraction f(1,2);
      return f;     }
    
    bool operator==(const Fraction& f1, const Fraction& f2){
      return false;
    }
    
    bool operator==(const double num, const Fraction& f){
      return false;
    }
    
    bool operator<(const Fraction& f1, const Fraction& f2){
      return false;
    }
    
    bool operator<=(const Fraction& f1, const Fraction& f2){
      return false;
    }
    
    bool operator>(const Fraction& f1, const Fraction& f2){
      return false;
    }
    
    bool operator>(const Fraction& f, double num){
      return false;
    }
    
    bool operator>=(const Fraction& f1, const Fraction& f2){
      return false;
    }
    
    Fraction& operator++(Fraction& f){
        // implementation here
    }
    
    Fraction& operator--(Fraction& f){
      Fraction f3(1,2);
      return f;      }
    
    Fraction operator>>(const Fraction& f, int num){
      Fraction f(1,2);
      return f;     }
    
    ostream& operator<<(ostream& os,const Fraction& f){
        // implementation here
    }
    Fraction::Fraction(int num1, int num2){}



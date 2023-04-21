#include "Fraction.hpp"
#include <iostream>

using namespace std;

namespace ariel{}
    // implementation of member functions
    Fraction Fraction::operator+(const Fraction& other){
      Fraction f(1,2);
      return f;
    }
    
    Fraction Fraction::operator+(float num){
      Fraction f(1,2);
      return f;}

    Fraction operator+(float num,const Fraction& fraction){
      Fraction ffff(1,2);
      return ffff;     }

    Fraction operator+(const Fraction& f, float num){
      Fraction ffff(1,2);
      return ffff;     }


    Fraction Fraction::operator-(const Fraction& other){
      Fraction f(1,2);
      return f;    }
    
    Fraction Fraction::operator-(float num){
      Fraction f(1,2);
      return f;    }
    

    Fraction operator-(float num,const Fraction& fraction){
      Fraction ffff(1,2);
      return ffff;     }

    Fraction operator-(const Fraction& f, float num){
      Fraction ffff(1,2);
      return ffff;     }


    Fraction Fraction::operator*(const Fraction& other){
      Fraction f(1,2);
      return f;    }

    Fraction operator*(float num,const Fraction& fraction){
      Fraction ffff(1,2);
      return ffff;     }

    Fraction operator*(const Fraction& f, float num){
      Fraction ffff(1,2);
      return ffff;     }
    
    Fraction Fraction::operator/(const Fraction& other){
      Fraction f(1,2);
      return f;    }

    Fraction operator/(float num,const Fraction& fraction){
      Fraction ffff(1,2);
      return ffff;     }

    Fraction operator/(const Fraction& f, float num){
      Fraction ffff(1,2);
      return ffff;     }

    bool Fraction::operator==(const Fraction& other) const{
      return false;
    }
    bool operator==(float num, const Fraction& fraction){
      return false;
    }
    bool operator==(const Fraction& fraction,float num){
      return false;
    }

    bool Fraction::operator<(const Fraction& other){
      return false;
    }
    bool operator<(const Fraction& fraction1, const Fraction& fraction2){
      return false;
    }
    
    bool operator<(const Fraction& f, double num){
      return false;
    }
    
    bool Fraction::operator<=(const Fraction& other){
      return false;
    }
    bool operator<=(const Fraction& fraction1, const Fraction& fraction2){
      return false;
    }
    
    bool operator<=(const Fraction& f, double num){
      return false;
    }
    
    bool Fraction::operator>(const Fraction& other){
      return false;
    }
    
    bool Fraction::operator>(float num){
      return false;
    }
    bool operator>(const Fraction& fraction1, const Fraction& fraction2){
      return false;
    }
    
    bool operator>(const Fraction& f, double num){
      return false;
    }
    
    bool Fraction::operator>=(const Fraction& other){
      return false;
    }
    bool operator>=(const Fraction& fraction1, const Fraction& fraction2){
      return false;
    }
    
    bool operator>=(const Fraction& f, double num){
      return false;
    }
    
    Fraction& Fraction::operator++(){
      return *this;

    }
    
    Fraction Fraction::operator++(int){
      Fraction fb(1,2);
      return fb;
    }
    
    Fraction& Fraction::operator--(){
    return *this;
    }
    
    Fraction Fraction::operator--(int){
        Fraction fc(1,2);
        return fc;
    }
    
    Fraction Fraction::operator>>(const Fraction& other){
      Fraction f(1,2);
      return f;      }
    
    ostream& operator<<(ostream& os,const Fraction& other){
        ostream& stam = cout;
        stam << "hello" <<endl;
        return stam;
      }
    
    // implementation of friend functions

  
    /*/Fraction& operator++(Fraction& f){
      return *this;
    }/*/
    
    /*/Fraction& operator--(Fraction& f){
      Fraction f3(1,2);
      return f;      }/*/
    
    Fraction operator>>(const Fraction& f, int num){
      Fraction q(1,2);
      return q;     }
    
    Fraction::Fraction(int num1, int num2){}



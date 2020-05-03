#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std ;

namespace solver{
     // + operator
     RealVariable operator+(const RealVariable& n1, const RealVariable &n2 ){
          return RealVariable(n1.a+n2.a,n1.b+n2.b,n1.c+n2.c);
    }
     RealVariable operator+(const RealVariable& n1, const double n2 ){
          return RealVariable(n1.a,n1.b,n1.c+n2);
    }
     RealVariable operator+(const double n1, const RealVariable& n2){
          return RealVariable(n2.a,n2.b,n1+n2.c);
    }

    // - operator
     RealVariable operator-(const RealVariable& n1,const RealVariable& n2 ){
           return RealVariable(n1.a-n2.a,n1.b-n2.b,n1.c-n2.c);
    }
     RealVariable operator-(const RealVariable& n1, const double n2){
        return RealVariable(n1.a,n1.b,n1.c-n2);
    }
     RealVariable operator-(const double n1, const RealVariable& n2){
        return RealVariable((-1)*n2.a,(-1)*n2.b,n1-n2.c);
    }

    //* operator
     RealVariable operator*(const RealVariable& n1, const RealVariable &n2){
    return RealVariable  ((n1.a*n2.c+n1.c*n2.a+n1.b*n2.b),
                         (n1.c*n2.b+n1.b*n2.c),
                         (n1.c*n2.c));

                       
                         
    }
     RealVariable operator*(const RealVariable& n1, const double n2){
        return RealVariable(n1.a*n2,n1.b*n2,n1.c*n2);
    }
     RealVariable operator*(const double n1, const RealVariable& n2){
          return RealVariable(n1*n2.a,n1*n2.b,n1*n2.c);
    }

    //: operator
    RealVariable operator/(const RealVariable& n1, const RealVariable &n2){
         if((n2.a==0)&&(n2.b==0)&& (n2.c==0))
          throw runtime_error {"Divison by zero is invalid "};
          return RealVariable(n1.a/n2.a,n1.b/n2.b,n1.c/n2.c);

    }
    RealVariable operator/(const RealVariable& n1, const double n2){
          if(n2==0)
          throw runtime_error {"Divison by zero is invalid "};

       return RealVariable(n1.a/n2,n1.b/n2,n1.c/n2);
    }
    RealVariable operator/(const double n1, const RealVariable& n2){
          if((n2.a==0)&&(n2.b==0)&& (n2.c==0))
          throw runtime_error {"Divison by zero is invalid "};

          return RealVariable(n1/n2.a,n1/n2.b,n1/n2.c);
    }

    // ^ operator
    RealVariable operator^(const RealVariable &n1, const double n2){
         //cout << "a:" <<n1.a <<  "b:" << n1.b << "c: "<<n1.c << "n2: "<<n2<< endl;
         if(n2 ==0) return RealVariable(0,0,1);
         if(n2 ==1) return n1;
         if(n2 ==2 && n1.a==0 && n1.b!=0 && n1.c!=0) return RealVariable(1,n1.b*n2*n1.c,n1.c*n1.c);
         if(n2 ==2 && n1.a==0 && n1.b==0 && n1.c!=0) return RealVariable(0,0,n1.c*n1.c);
         if(n2 ==2 && n1.a==0 && n1.b!=0 && n1.c==0) return RealVariable(n1.b,0,0);
         if(n2 >2 && n1.a==0 && n1.b==0 && n1.c!=0) return RealVariable(0,0,pow(n1.c,n2));

          throw runtime_error {"Invalid power "};

        }

    // == operator
    RealVariable operator==(const RealVariable& n1, const RealVariable& n2){ 
         return n1-n2;
    }
    RealVariable operator==(const RealVariable& n1, const double n2){
         return n1-n2;
    }
    RealVariable operator==(const double n1, const RealVariable& n2){
         return n2-n1;
    }

      // + operator
        ComplexVariable operator+(const ComplexVariable& n1,const ComplexVariable &n2 ){
             return ComplexVariable(n1.a+n2.a,n1.b+n2.b,n1.c+n2.c);
        }
        ComplexVariable operator+(const ComplexVariable& n1, const complex<double> n2){
             return ComplexVariable(n1.a,n1.b,n1.c+n2);
        }
        ComplexVariable operator+(const complex<double> n1,const ComplexVariable& n2){
             return ComplexVariable(n2.a,n2.b,n1+n2.c);
        }
        // - operator
        ComplexVariable operator-(const ComplexVariable& n1,const ComplexVariable &n2 ){
             return ComplexVariable(n1.a-n2.a,n1.b-n2.b,n1.c-n2.c);
        }
        ComplexVariable operator-(const ComplexVariable& n1,const complex<double> n2){
              return ComplexVariable(n1.a,n1.b,n1.c-n2);
        }
        ComplexVariable operator-(const complex<double> n1,const ComplexVariable& n2){
              return ComplexVariable(n2.a,n2.b,n1-n2.c);
        }
        //* operator
        ComplexVariable operator*(const ComplexVariable& n1, const ComplexVariable &n2){
               return ComplexVariable  ((n1.a*n2.c+n1.c*n2.a+n1.b*n2.b),
                                        (n1.c*n2.b+n1.b*n2.c),
                                        (n1.c*n2.c));
        }
        ComplexVariable operator*(const ComplexVariable& n1, const complex<double> n2){
               return ComplexVariable(n1.a*n2,n1.b*n2,n1.c*n2);
        }
        ComplexVariable operator*(const complex<double> n1,const ComplexVariable& n2){
               return ComplexVariable(n1*n2.a,n1*n2.b,n1*n2.c);
        }
        //: operator
        ComplexVariable operator/(const ComplexVariable& n1, const ComplexVariable & n2){
          if((n2.a==complex(0.0,0.0))&&(n2.b==complex(0.0,0.0))&& (n2.c==complex(0.0,0.0)))
               throw runtime_error {"Divison by zero is invalid "};
          return ComplexVariable(n1.a/n2.a,n1.b/n2.b,n1.c/n2.c);
        }
        ComplexVariable operator/(const ComplexVariable& n1, const complex<double> n2){
           if(n2==complex(0.0,0.0))
          throw runtime_error {"Divison by zero is invalid "};

          return ComplexVariable(n1.a/n2,n1.b/n2,n1.c/n2);
        }
        
        // ^ operator
        ComplexVariable operator^(const ComplexVariable &n1, const complex<double> n2){
         if(n2 ==complex<double>(0.0,0.0))
          return ComplexVariable(0,0,1);
         if(n2 ==complex<double>(1.0,0.0))
          return n1;
         if(n2 ==complex<double>(2.0,0.0) && n1.a==complex<double>(0.0,0.0) && n1.b!=complex<double>(0.0,0.0) && n1.c!=complex<double>(0.0,0.0))
          return ComplexVariable(1,n1.b*n2*n1.c,n1.c*n1.c);
         if(n2 ==complex<double>(2.0,0.0) && n1.a==complex<double>(0.0,0.0) && n1.b==complex<double>(0.0,0.0) && n1.c!=complex<double>(0.0,0.0)) 
          return ComplexVariable(0,0,n1.c*n1.c);
         if(n2 ==complex<double>(2.0,0.0) && n1.a==complex<double>(0.0,0.0) && n1.b!=complex<double>(0.0,0.0) && n1.c==complex<double>(0.0,0.0)) 
          return ComplexVariable(n1.b,0,0);
         if(n2.real() >2 && n1.a==complex<double>(0.0,0.0) && n1.b==complex<double>(0.0,0.0) && n1.c!=complex<double>(0.0,0.0)) 
          return ComplexVariable(0,0,pow(n1.c,n2));

          throw runtime_error {"Invalid power "};
        }
        // == operator
        ComplexVariable operator==(const ComplexVariable &n1, const ComplexVariable &n2){
             return n1-n2;
        }
        ComplexVariable operator==(const ComplexVariable &n1, const complex<double> n2){
             return n1-n2;
        }
        ComplexVariable operator==(const complex<double> n1,const ComplexVariable &n2){
             return n2-n1;
        }

    double solve (const RealVariable& x){
         double a = x.getA();
         double b = x.getB();
         double c = x.getC();
  
          if(a!=0 && b==0 && c>=0 && (c/-a)>=0){
               return sqrt(c/-a);
          }
          if(a==0 && b!=0){
               return c/-b;
          }
          else if( a==0 && b==0 && c!=0){
               throw runtime_error {"No solution! "};
          }

          double temp= b*b - 4*a*c;
          if (temp >= 0) {
               return (-b + sqrt(temp)) / (2*a);
          }

         throw runtime_error {"There is no Real solution! "};

    }

    complex<double> solve (const ComplexVariable & x){

         complex<double> a = x.getA();
         complex<double> b = x.getB();
         complex<double> c = x.getC();

          if(a==complex<double>(0.0,0.0) && b!=complex<double>(0.0,0.0))
               return c/-b;
          if( a==complex<double>(0.0,0.0) && b==complex<double>(0.0,0.0) && c!=complex<double>(0.0,0.0)){
               cout << "a:" <<a <<  "b:" << b << "c: "<<c << endl;
               throw runtime_error {"No solution! "};}

          complex<double> temp= b*b - complex(4.0,0.0)*a*c;
          return ((-b+sqrt(temp))/(complex(2.0,0.0)*a));
    }
          
    
}
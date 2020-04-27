#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std ;

namespace solver{
     // + operator
     RealVariable operator+(const RealVariable& n1, const RealVariable &n2 ){
        cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator+(const RealVariable& n1, const double n2 ){
          cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator+(const double n1, const RealVariable& n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }

    // - operator
     RealVariable operator-(const RealVariable& n1,const RealVariable& n2 ){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator-(const RealVariable& n1, const double n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator-(const double n1, const RealVariable& n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }

    //* operator
     RealVariable operator*(const RealVariable& n1, const RealVariable &n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator*(const RealVariable& n1, const double n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
     RealVariable operator*(const double n1, const RealVariable& n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }

    //: operator
    RealVariable operator/(const RealVariable& n1, const RealVariable &n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
    RealVariable operator/(const RealVariable& n1, const double n2){
         cout << "func" << endl;
       return RealVariable(1,1,1);
    }
    RealVariable operator/(const double n1, const RealVariable& n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }

    // ^ operator
    RealVariable operator^(const RealVariable &n1, const double n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
        }

    // == operator
    RealVariable operator==(const RealVariable& n1, const RealVariable& n2){ 
        cout << "func" << endl;
        return RealVariable(1,1,1);}
    RealVariable operator==(const RealVariable& n1, const double n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }
    RealVariable operator==(const double n1, const RealVariable& n2){
         cout << "func" << endl;
        return RealVariable(1,1,1);
    }

      // + operator
        ComplexVariable operator+(const ComplexVariable& n1,const ComplexVariable &n2 ){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator+(const ComplexVariable& n1, const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator+(const complex<double> n1,const ComplexVariable& n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        // - operator
        ComplexVariable operator-(const ComplexVariable& n1,const ComplexVariable &n2 ){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator-(const ComplexVariable& n1,const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator-(const complex<double> n1,const ComplexVariable& n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        //* operator
        ComplexVariable operator*(const ComplexVariable& n1, const ComplexVariable &n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator*(const ComplexVariable& n1, const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator*(const complex<double> n1,const ComplexVariable& n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        //: operator
        ComplexVariable operator/(const ComplexVariable& n1, const ComplexVariable &yn2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator/(const ComplexVariable& n1, const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        
        // ^ operator
        ComplexVariable operator^(const ComplexVariable &n1, const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        // == operator
        ComplexVariable operator==(const ComplexVariable &n1, const ComplexVariable &n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator==(const ComplexVariable &n1, const complex<double> n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }
        ComplexVariable operator==(const complex<double> n1,const ComplexVariable &n2){
             cout << "func" << endl;
        return ComplexVariable(1,1,1);
        }

    double solve (const RealVariable& x){
         cout << "func" << endl;
        return 1.0;
    }
    complex<double> solve (const ComplexVariable & x){
         cout << "func" << endl;
        return complex(1.0,1.0);
    }
}
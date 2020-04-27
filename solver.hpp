
#include <iostream>
#include <complex>
using namespace std;




namespace solver{
    
class RealVariable{
    private:
    double a,b,c;

    public:
    RealVariable(double a ,double b, double c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    RealVariable(): a(0), b(1), c(0) {}

    const double & getA () const{
        return this->a;
    }
    const double & getB () const{
        return b;
    }
    const double & getC () const{
        return c;
    }

    // + operator
    friend RealVariable operator+(const RealVariable& n1, const RealVariable &n2 );
    friend RealVariable operator+(const RealVariable& n1, const double n2 );
    friend RealVariable operator+(const double n1, const RealVariable& n2);

    // - operator
    friend RealVariable operator-(const RealVariable& n1,const RealVariable& n2 );
    friend RealVariable operator-(const RealVariable& n1, const double n2);
    friend RealVariable operator-(const double n1, const RealVariable& n2);

    //* operator
    friend RealVariable operator*(const RealVariable& n1, const RealVariable &n2);
    friend RealVariable operator*(const RealVariable& n1, const double n2);
    friend RealVariable operator*(const double n1, const RealVariable& n2);

    //: operator
    friend RealVariable operator/(const RealVariable& n1, const RealVariable &n2);
    friend RealVariable operator/(const RealVariable& n1, const double n2);
    friend RealVariable operator/(const double n1, const RealVariable& n2);

    // ^ operator
    friend RealVariable operator^(const RealVariable &n1, const double n2);

    // == operator
    friend RealVariable operator==(const RealVariable& n1, const RealVariable& n2);
    friend RealVariable operator==(const RealVariable& n1, const double n2);
    friend RealVariable operator==(const double n1, const RealVariable& n2);
    };

    class ComplexVariable{
    private:
        complex <double> a;
        complex <double> b;
        complex <double> c;

    public:
        ComplexVariable(): a(0), b(1,0), c(0) {}

        ComplexVariable(complex <double> a,complex <double> b,complex <double> c){
            this->a = complex<double>(a);
            this->b = complex<double>(b);
            this->c = complex<double>(c);
        }

        const complex<double> &getA () const { return a; }
        const complex<double> &getB () const { return b; }
        const complex<double> &getC () const { return c; }


        // + operator
        friend ComplexVariable operator+(const ComplexVariable& n1,const ComplexVariable &n2 );
        friend ComplexVariable operator+(const ComplexVariable& n1, const complex<double> n2);
        friend ComplexVariable operator+(const complex<double> n1,const ComplexVariable& n2);
        // - operator
        friend ComplexVariable operator-(const ComplexVariable& n1,const ComplexVariable &n2 );
        friend ComplexVariable operator-(const ComplexVariable& n1,const complex<double> n2);
        friend ComplexVariable operator-(const complex<double> n1,const ComplexVariable& n2);
        //* operator
        friend ComplexVariable operator*(const ComplexVariable& n1, const ComplexVariable &n2);
        friend ComplexVariable operator*(const ComplexVariable& n1, const complex<double> n2);
        friend ComplexVariable operator*(const complex<double> n1,const ComplexVariable& n2);
        //: operator
        friend ComplexVariable operator/(const ComplexVariable& n1, const ComplexVariable &yn2);
        friend ComplexVariable operator/(const ComplexVariable& n1, const complex<double> n2);
        
        // ^ operator
        friend ComplexVariable operator^(const ComplexVariable &n1, const complex<double> n2);
        // == operator
        friend ComplexVariable operator==(const ComplexVariable &n1, const ComplexVariable &n2);
        friend ComplexVariable operator==(const ComplexVariable &n1, const complex<double> n2);
        friend ComplexVariable operator==(const complex<double> n1,const ComplexVariable &n2);

    };

    double solve (const RealVariable& x);
    complex<double> solve (const ComplexVariable & x);

}

  


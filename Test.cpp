# include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

TEST_CASE("Real Variables - Linear"){
    
    RealVariable x;
    
    CHECK(solve(2*x == 4) == 2);
    CHECK(solve(3*x == 6) == 2);
    CHECK(solve(2*x+2 == 4) == 1);
    CHECK(solve(2*x+4 == 4) == 0);
    CHECK(solve(2*x-4 == 4) == 4);
    CHECK(solve(2*x-6 == 4.0) == 5);
    CHECK(solve(x + 4 == 4) == 0);
    CHECK(solve(2*x == 3-2*x) == 0.75);
    CHECK(solve(4 == 2*x) == 2);
    CHECK(solve(x/2 == 4) == 8);
    CHECK(solve(2*x+(2*x)*2 == (4+4)*2+2) == 3);
    CHECK(solve(2*x == -4) == -2);
    CHECK(solve(2*x == (-4)) == -2);
    CHECK(solve(2*(2*x) == 4) == 1);
    CHECK(solve((2*x+2)*2 == 4) == 0);
    CHECK(solve((2*x+2)/2 == 4) == 3);
    CHECK(solve((4*x+4)/2 == 4) == 1);
    CHECK(solve((6*x)/2 == 12) == 4);
    CHECK(solve((18)/2 == 3*x) == 3);
    CHECK(solve((2*x+2) == 3*x+2) == 0);
    CHECK(solve((2*x+2) == 4*x-14) == 6);
    CHECK(solve((x+2)/2 == 3) == 4);
    CHECK(solve((x/2)*2 == 2*x+7) == -7);
    CHECK(solve((x*2) == 3) == 1.5);
    CHECK(solve((4*x) == 10) == 0.4);
    CHECK(solve((2*x)-1 == 0) == 1.5);
    CHECK_THROWS_AS(solve((2*x)/0 ==1),std::exception);
    CHECK_THROWS_AS(solve(4*x -(2*x)*2 ==1),std::exception);
    CHECK_THROWS_AS(solve((2*x) ==x/0) ,std::exception);
    CHECK_THROWS_AS(solve((2*x)/(4-3-1) ==1),std::exception);
    CHECK_THROWS_AS(solve(1*x == 2/(-1+1)),std::exception);
    

}

TEST_CASE("Real Variables - polynom"){
    
    RealVariable x;
    
    CHECK(((solve(x^2 == 4) == 2 )|| (solve(x^2 == 4) == -2)));
    CHECK(((solve((x^2)== -1*x) == -1 )|| (solve((x^2 )== -1*x) == 0) ));
    CHECK(((solve(x^2-25 == 0) == 5) || (solve(x^2-25 == 0) == -5)));
    CHECK(((solve(2*(x^2)+10*x+8 == 0) == -1 )|| (solve(2*(x^2)+10*x+8 == 0) == -4 )));
    CHECK(((solve(x^2==16) == 4 )|| (solve(x^2==16) == -4)));
    CHECK(((solve(81 == x^2) == 9 )|| (solve(81 == x^2) == -9)));
    CHECK(((solve(0 == x^2-49) == 7 )|| (solve(0 == x^2-49) == -7)));
    CHECK(((solve(2*(x^2) == 8*2) == 2 )|| (solve(2*(x^2) == 8*2) == -2)));
    CHECK(solve(0 == 1+ 2*(x^4) == 0));
    CHECK(((solve(-1*((x^2)+8*x+20 == 0) == 2) || (solve(-1*((x^2)+8*x+20 == 0) == -10)))));
    CHECK(((solve(0*(x^2) + (x^2  == 16) == 4 )|| (solve(0*(x^2) + (x^2  == 16) == -4 )))));
    CHECK(solve((2*x^2)/2 +2*x + 1 == 0) == -1);
    CHECK(((solve((x^2)+x/2 == 2-x/2  ) == -2 )|| (solve((x^2)+x/2 == 2-x/2  ) == 1 )));
    CHECK(((solve((x^2)+6*x+8 == x +2 ) == 1) || (solve((x^2)+6*x+8 == x +2 ) == 6)));
    CHECK(((solve((x^2)+5*x+6 == x +6 ) == 2) ||(solve((x^2)+5*x+6 == x +6 ) == -4)));
    CHECK(((solve((x^2) == 8-(x^2) ) == 2) || (solve((x^2) == 8-(x^2 )) == -2)));
    CHECK(((solve(2*(x^2)+5*x-3 == (x^2)+6*x+3 ) == 1) || (solve(2*(x^2)+5*x-3 == (x^2)+6*x+3 ) == 0)));
    CHECK(((solve(3*(x^2)-8*x-4 == (x^2)-3*x-6 ) == 2) ||(solve(3*(x^2)-8*x-4 == (x^2)-3*x-6 ) == 0.5)));
    CHECK(((solve((x^2)+3*x-4 == 3-(x^2)-2*x ) == -3.5) || (solve((x^2)+3*x-4 == 3-(x^2)-2*x ) == 1)));
    CHECK(((solve(5*(x^2)+x+2 == (x^2)+x+6 ) == 1) || (solve(5*(x^2)+x+2 == (x^2)+x+6 ) == -1)));
    CHECK(((solve(3*(x^2)+6 == -2*(x^2)-7*x+4 ) == -1) || (solve(3*(x^2)+6 == -2*(x^2)-7*x+4 ) == -0.4)));
    CHECK(((solve(2*(x^2)+4*x-5 == (x^2)+2*x+3 ) == 2) || (solve(2*(x^2)+4*x-5 == (x^2)+2*x+3 ) == -4)));
    CHECK(((solve((x^2)+x-12 == (x^2)+2*x+3 ) == 3) || (solve((x^2)+x-12 == (x^2)+2*x+3 ) == -2.5)));
    CHECK(((solve((x^2)+10*x+25 == -25-(x^2)-10*x ) == -5)));
    CHECK(((solve(3*(x^2)+14*x+1 == 2*(x^2)+8*x-8 ) == -3)));
    CHECK_THROWS_AS(solve((x^5)/0 ==1),std::exception);
    CHECK_THROWS_AS(solve(((x^2) -(x^2) ==1)),std::exception);
    CHECK_THROWS_AS(solve((x^8) ==x/0),std::exception);
    CHECK_THROWS_AS(solve((x^2)/(4-3-1) ==1),std::exception);
    
    


}

TEST_CASE("Complex Variables - Linear"){
    

    ComplexVariable y;
    
    CHECK(solve(2*y == 4) == complex(2.0,0.0));
    CHECK(solve(y+5i == 2*y+3i) == complex(0.0,2.0));
    CHECK(solve(4*y -8  == 10*y +complex(4.0,-12.0)) == complex(-2.0,2.0));
    CHECK(solve(2*y-4 == 4) == complex(4.0,0.0));
    CHECK(solve(2*y-6 == 4.0) == complex(5.0,0.0));
    CHECK(solve(y + 4 == 4) == complex(0.0,0.0));
    CHECK(solve(2*y == 3-2*y) == complex(0.75,0.0));
    CHECK(solve(4 == 2*y) == complex(2.0,0.0));
    CHECK(solve(y/2 == 4) == complex(8.0,0.0));
    CHECK(solve(2*y+(2*y)*2 == (4+4)*2+2) == complex(3.0,0.0));
    CHECK(solve(2*y == -4) == complex(-2.0,0.0));
    CHECK(solve(2*y == (-4)) == complex(-2.0,0.0));
    CHECK(solve(2*(2*y) == 4) == complex(1.0,0.0));
    CHECK(solve((2*y+2)/2 == 4) == complex(3.0,0.0));
    CHECK(solve((4*y+4)/2 == 4) == complex(1.0,0.0));
    CHECK(solve((2*y+2) == 3*y+2) == complex(0.0,0.0));
    CHECK(solve(5*y == 2*y) == complex(0.0,0.0));
    CHECK(solve(y+5 == complex(0.0,3.0)) == complex(-5.0,3.0));
    CHECK(solve((y/2)*2 == 2*y+7 + complex (2.0 ,-3.0)) == complex(-9.0,3.0));
    CHECK_THROWS_AS(solve((2*y)/0 ==1), std::exception);
    CHECK_THROWS_AS(solve((2*y) ==y/0), std::exception);
    CHECK_THROWS_AS(solve((2*y)/(4-3-1) ==1), std::exception);
    

}

TEST_CASE("Complex Variables - Polynom"){
    
    ComplexVariable y;

    CHECK(((solve(y^2 == 4) == complex(2.0,0.0))|| (solve(y^2 == 4) == complex(-2.0,0.0))));
    CHECK(solve((y^2)+y == 0) == complex(0.0,0.0));
    CHECK(((solve((y^2)+y == 0) == complex(-1.0,0.0) )|| (solve((y^2)+y == 0) == complex(0.0,0.0)) ));
    CHECK(((solve(y^2 + 25 == 0) == complex(0.0,5.0)) || (solve(y^2 + 25 == 0) == complex(0.0,-5.0))));
    CHECK(((solve(2*(y^2)-8*y == complex(10.0,-20.0) + complex(0.0,12.0)*y) == complex(1.0,2.0) )||
     (solve(2*(y^2)-8*y == complex(10.0,-20.0) + complex(0.0,12.0)*y) == complex(3.0,4.0) )));
    CHECK(((solve((y^2) +4*y + 7 ==0 ) == complex(-2.0, -sqrt(3)))|| (solve((y^2) +4*y + 7 ==0 ) == complex(-2.0, sqrt(3)))));
    CHECK(((solve(-81 == y^2) == complex(0.0,9.0) )|| (solve(81 == y^2) == complex(0.0,-9.0))));
    CHECK(((solve(6*(y^2)/2 + 6*y + 3 == 3) == complex(0.0,0.0) )|| (solve(6*(y^2)/2 + 6*y + 3 == 3) == complex(-2.0,0.0) )));
    CHECK(((solve(3*(y^2)+6 == -2*(y^2)-7*y+4 ) == complex(-1.0,0.0)) || solve(3*(y^2)+6 == -2*(y^2)-7*y+4 ) == complex(-0.4,0.0)));
    CHECK(((solve(2*(y^2)+4*y-5 == (y^2)+2*y+3 ) == complex(2.0,0.0)) || solve(2*(y^2)+4*y-5 == (y^2)+(2*y)+3 ) == complex(-4.0,0.0)));
    CHECK(((solve((y^2)+y-12 == (y^2)+2*y+3 ) == complex(3.0,0.0)) || solve((y^2)+y-12 == (y^2)+2*y+3 ) == complex(-2.5,0.0)));
    CHECK(((solve(y^2 == -16) == complex(0.0,4.0) )|| (solve(y^2 == -16) == complex(0.0,-4.0)) ));
    CHECK(((solve((y^2)*2 == -19) == complex(0.0,3.0) )|| (solve((y^2)*2 == -19) == complex(0.0,-3.0)) ));
    CHECK_THROWS_AS(solve((2*y^2)/0 ==1), std::exception);
    CHECK_THROWS_AS(solve((2*y^3) == y/0), std::exception);
    CHECK_THROWS_AS(solve((2*y^3) == y), std::exception);
    CHECK_THROWS_AS(solve((2*y) == y^5), std::exception);
    CHECK_THROWS_AS(solve((2*y^2)/(4-3-1) == 1), std::exception);  

}

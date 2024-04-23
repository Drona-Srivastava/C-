/*
Write a program that will output the sum of two quadratic polynomials. 
Your program must do the following: 
1. Define a class named “Poly” with three private data members a, b and c (type double) to represent the coefficients of a quadratic polynomial in the form: ax2 + bx + c 
2. Include a constructor in the Poly class to initialize all private data members with caller-supplied values (in addition to the default constructor!) 
3. Overload the addition operator to return the sum of two Poly objects. 
4. A display function to output Poly objects in the following format, e.g.,: 
ax^2 + bx + c 
Where a, b and c are the coefficients of the Poly object. Do not display the a or b terms if they have zero coefficients. Moreover, if any coefficient is negative it should be precede by a minus sign, and not a plus sign. 
5. An evaluate function that calculates the value of the Polynomial at a given value of x.
6. In your main() function, declare and initialize two Poly objects, q1 and q2, to represent the following polynomials: 3x 2 + 4x – 2 and -4x + 10 . Also declare a third, un-initialized Poly object named sum. 
7. Output the sum of the two polynomials to the console using the following C++ code exactly as it appears: 
 
sum = q1+q2;
cout << q1 <<" : q1\n";
cout << q2 <<" : q2\n";
cout << sum <<" : q1+q2\n";
*/

#include <iostream>
using namespace std;
class Poly{
    private:
        double a,b,c;
    public:
        Poly(){
            a=0;
            b=0;
            c=0;
        }
        Poly(double a, double b, double c){
            this->a = a;
            this->b = b;
            this->c = c;
        }
};
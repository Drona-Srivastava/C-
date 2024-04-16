#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
        Complex(){
            real = 0;
            imag = 0;
        }
        Complex(int x,int y){
            real = x;
            imag = y;
        }
        void printf(){
            cout<<"Complex number is "<<real<<"+"<<imag<<"i"<<endl;
        }
        Complex operator + (Complex c){
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
};

int main(){
    Complex c1(3,2);
    Complex c2(4,3);
    c1.printf();
    c2.printf();
    Complex c3;
    c3 = c1+c2;
    c3.printf();
}
#include<iostream>
using namespace std;
class Complex{
	int real;
	int imag;
	
	public:
		//default constructors
		Complex(){
			real=5;
			imag=4;
		}
		//parameterized constructor
		Complex(int r, int i){
			real=r;
			imag=i;
		}
		Complex(int real){
			this->real=real;
			//imag=i;
		}
		void setData(int r, int i){
			real=r;
			imag=i;
		}
		void getData(){
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
		void add(Complex c1, Complex c2){
			Complex c3;
			c3.real=c1.real+c2.real;
			c3.imag=c1.imag+c2.imag;
			cout<<"Addition result is "<<c3.real<<"+"<<c3.imag<<"i"<<endl;
		}
};

int main(){
	Complex c1(10,20);
	Complex c2(30);//
	//int a,b,c,d;
	//cin>>a>>b>>c>>d;
	
	
	cout<<"1st complex number is "<<endl;
	c1.getData();
	cout<<"2nd complex number is "<<endl;
	c2.getData();
	c1.add(c1,c2);
	
		
	return 0;
}
#include <iostream>
using namespace std;
class A{
    protected:
        int dataA;
    public:
        void getA(int a){
            dataA = a;
        }
        void showA(){
            cout<<"Value of A is "<<dataA<<endl;
        };

};

class B{
    protected:
        int dataB;
    public:
        void getB(int b){
            dataB = b;
        }
        void showB(){
            cout<<"Value of B is "<<dataB<<endl;
        };
        
};

class C:public A,public B{
    public:
        void add(){
            cout<<"Value of sum is "<<dataA+dataB<<endl;
        };
        
};

int main(){
    C objC;
    objC.getA(20);
    objC.showA();
    objC.getB(30);
    objC.showB();
    objC.add();
}
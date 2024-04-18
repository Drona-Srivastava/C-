#include <iostream>
using namespace std;
class Baseclass{
    public:
        int b=5;
        virtual void display(){
            cout<<"Base class b = "<<b<<endl;
        }
};
class Derived:public Baseclass{
    public:
        int d = 500;
        void display(){
            cout<<"Base class b = "<<b<<endl;
            cout<<"Derived class d = "<<d<<endl;
        }
};

int main(){
    Baseclass *ptr;
    Derived obj_1;
    ptr = &obj_1; //Parent can point to the child !!
    ptr -> display();  // this will not get us the derived class display()
    //this will get us the display fn of base clas !!
    //to access the display fn of derived we can mention the base class function as virtual
    // the statement would be
    // virtual void display()
    // virtual fn comes in use only in over-riden cases
}
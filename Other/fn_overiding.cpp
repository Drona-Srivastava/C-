#include <iostream>
using namespace std;
class Baseclass{
    public:
        int b=5;
        void display(){
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
    /*
    Baseclass *bptr;
    Baseclass obj_base;
    bptr = &obj_base;
    bptr->display(); // Base class b = 5

    Derived *bt;
    Derived obj_derive;
    bt = &obj_derive;
    bt -> display();*/

    /*Derived *dtpr;
    Baseclass obj_base1;
    dtpr = &obj_base;*/
    //Not possible a child cannot point at parent !!!

    Baseclass *ptr;
    Derived obj_1;
    ptr = &obj_1; //Parent can point to the child !!
    ptr -> display();  // this will not get us the derived class(Child) display()
    //this will get us the display fn of base class(Parent) !!
    //to access the display fn of derived(Child) we can mention the base class(Parent) function as virtual
    // the statement would be
    // virtual void display()
}
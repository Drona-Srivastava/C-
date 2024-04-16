#include <iostream>
using namespace std;

//All basic operators can be overloaded except some of them can look at a list
class Test{
    int x;
    public:
    Test(){
        x=0;
    }
    Test(int y){
        x = y;
    }
    void pf(){
        cout<<"x = "<<x<<endl;
    }
    Test  operator ++ (){ //we can't do pre-increment and post-increment together like this so we use a parameter to distingiush between both
        Test temp;
        temp.x = ++x ;
        return temp;
    }
    Test operator ++(int){
        Test temp;
        temp.x = x++ ;
        return temp;
    }
    Test operator --(){
        Test temp;
        temp.x = --x ;
        return temp;
    }
    Test operator --(int){
        Test temp;
        temp.x = x-- ;
        return temp;
    }
};

int main(){
    Test t;
    ++t;
    t.pf();
    t++;
    t.pf();
}
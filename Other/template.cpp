#include <iostream>
using namespace std;
/*class num{
    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float a, float b){
        return a+b;
    }
    float add(float a,int b){
        return a+b;
    }
};*/
//to avoid repetitive writing of snippets for different types of data we use templates

template<typename T1,typename T2>//here T1,T2 [could be anything] are alias to be used in place of function return type
T2 add(T1 a, T2 b){ //function can be given the data-type of whichever one want not neccessarily first one
    return a+b;
}
//template reduces excess functions for different data types with all variables being of same datatypes
int main(){
    cout<<add(2.3,3)<<endl;
    cout<<add(2,3.3)<<endl;
}
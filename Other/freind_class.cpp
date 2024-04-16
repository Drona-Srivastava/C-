/*
Menu Driven:-
1. Decimal to Binary
2. Decimal to Octal
3. Binary to Decimal
4. Octal to Decimal
These functions should be outside the class
class Number friend function in this class
private variable num 
public function:-  Setdata(initialise num) & getdata(print)
main -> Menu Driven
*/

#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
    void setData(int num){
        this->num = num;
    }
    void getData(){
        cout<<"The original number is: ";
    }
    friend int Dec2Bin(int num);
    /*friend void Dec2Oct(int x);
    friend void Bin2Dec(int x);
    friend void Oct2Dec(int x);*/
};

int Dec2Bin(int x){
    int bin[50],temp=x;
    int i=0;
    while(temp>0){
        bin[i] = temp%2;
        temp = temp/2;
        i++;
    }
    for (int j=0; j<5 ; j++){
        while(bin[j]!='0'){
            cout<<bin[j];
        }
    }
    return bin[50];
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    Number obj;
    obj.setData(num);
    Dec2Bin(num);
}
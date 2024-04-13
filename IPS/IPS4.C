/*
Implement a class called “MathOperations” that contains overloaded functions for performing mathematical operations on different data types. The class should have the following functionalities:

Overloaded function “add” to add two integers and return the result.
Overloaded function “add” to concatenate two strings and return the result.
Overloaded function “multiply” to multiply two floating-point numbers and return the result up to two decimal points.
Overloaded function “multiply” to multiply an integer by a string (repeated concatenation) and return the result.
Overloaded function “power” to calculate the power of an integer raised to another integer exponent and return the result.
Overloaded function “power” to calculate the power of a double raised to an integer exponent and return the result up to two decimal points.
Your task is to implement the MathOperations class with the above functionalities using function overloading.

Provide a main function to demonstrate the usage of these overloaded functions by performing various mathematical operations and printing the results. Based on the user choice (1-6) in the main function, the respective variables must be declared and initialized and the respective overloaded function must be called.

Input Format:
In the first line, the user enters the choice
In the second line, the first input is entered
In the third line, the second input is entered

Output Format:
Print the output
*/

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
class MathOperations{
    public:
    void add(int a, int b){
        cout<<a+b;
    }
    void add(string a, string b){
        cout<<a+b;
    }
    void multiply(float a, float b){
        cout<<a*b;
    }
    void multiply(int a, string b){
        if (a <= 0) {
            cout<<"";  
        }
        string result;
        for (int i = 0; i < a; i++) {
            result += b;  
        }
        cout<<result;
    }
    void power(int a, int b){
        cout<<pow(a,b);
    }
    void power(double a , int b){
        double power = pow(a,b);
        cout<< round(pow(a,b) * 100.0) / 100.0;
    }
};

int main(){
    MathOperations obj;
    string s1,s2,s3;
    int choice;
    cout<<"Enter Choice: ";
    cin>>choice;
    switch (choice){
    case 1:
        int a,b;
        cin>>a;
        cin>>b;
        obj.add(a,b);
        break;
    case 2:
        cin>>s1;
        cin>>s2;
        obj.add(s1,s2);
        break;
    case 3:
        float c,d;
        cin>>c;
        cin>>d;
        obj.multiply(c,d);
        break;
    case 4:
        int e;
        cin>>e;
        cin>>s3;
        obj.multiply(e,s3);
        break;
    case 5:
        int f,g;
        cin>>f;
        cin>>g;
        obj.power(f,g);
        break;
    case 6:
        double x;
        int v;
        cin>>x;
        cin>>v;
        obj.power(x,v);
        break;
    default:
        break;
    }
}
/*
Large-Small Number Using Constructor Overloading
Using the concept of constructor overloading, find the largest and the smallest numbers. If the user enters two numbers then find the largest and the smallest among those two numbers. If the user enters only one number, then find the largest and the smallest among the number entered by the user and a default number already initialized as a class variable. The default initialization of the member variable is 25.

User entry: (10, 20) – The largest number is 20 and the smallest number is 10

User entry: (20) – The largest number is 25 and the smallest number is 20

NB: The number entered by the user has to be a positive numbers. If at least one of the numbers is negative then print “Negative number entry not allowed”.

Input format:
In the first line, ask the user to enter the number of entries that the user wishes to enter (either 1 or 2)
From the second line onwards, ask the user to enter those many entries

Output format:
In the first line, print the largest number
In the second line, print the smallest number
OR
Print “Negative number entry not allowed” if any of the entered number by the user is negative one
*/

#include <iostream>
using namespace std;

class numbers
{
    private:
        int num1;
        int num2;
    public:
        numbers(){
            num1 = 25;
            num2 = 25;
        }
        numbers(int num11){
            num1 = num11;
            num2 = 25;
        }
        numbers(int num11, int num22){
            num1 = num11;
            num2 = num22;
        }
        void findsmaller()
        {
            if (num1 < 0 || num2 < 0) 
            {
                cout << "Negative number entry not allowed" << endl;
            }
            else
            {
                if (num1>num2)
                {
                    cout<<"Number 1 "<<num1<<" is greatest"<<endl;
                    cout<<"Number 2 "<<num2<<" is smaller"<<endl;
                }
                else
                {
                    cout<<"Number 1 "<<num1<<" is smaller"<<endl;
                    cout<<"Number 2 "<<num2<<" is greater"<<endl;
                }
            }
            
        }
};

int main()
{
    int entry,number1,number2;
    cout<<"Enter the number of entries"<<endl;
    cin>>entry;
    if (entry == 1)
    {
        cin>>number1;
        numbers n1(number1);
        n1.findsmaller();    
    }
    else if (entry==2)
    {
        cin>>number1;
        cin>>number2;
        numbers n2(number1,number2);
        n2.findsmaller();
    }
}
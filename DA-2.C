#include <iostream>
#include <cmath>
using namespace std;

/*
Part-1
In this Sub Assignment, you will implement the Simple Calculator containing the following
functionalities, namely, with Addition, Subtraction, Multiplication, Remainder, Division and Square
Root. You will need to edit the class named “SimpleCalculator_RegistrationNumber”. In this class,
you will need to implement the following
1. additionSimple() - two inputs, x and y. Return the result of adding x to y.
2. subtractionSimple() - two inputs, x and y. Return the result of subtracting x from y i.e y-x.
3. multiplicationSimple() - two inputs, x and y. Return the result of multiplying x to y i.e. x*y.
4. divisionSimple() - two inputs, x and y. Return the result of dividing y by x. Please check whether x is zero before dividing.
5. remainderSimple() - Please make sure that remainderSimple() takes two inputs, namely, a number (int) n and a number (int) m. The method should return the remainder of n divided by m.
6. squarerootSimple() - Takes one input, namely a number n, and returns the square root of the number. The return should be double. Please kindly make sure that the number n is positive.
NOTE: Please make sure that the access modifiers for the methods are “public”. 
*/

class SimpleCalculator_23BAI1314  
{
    public:

    int additionSimple(int x, int y){
        return (x+y);
    }

    int subtractionSimple(int x, int y){
        return (y-x);
    }

    int multiplicationSimple(int x, int y){
        return (y*x);
    }

    float divisionSimple(float x, float y){
        if (x!=0){
            return (y/x);
            
        }
        else {
            return 0; //x is zero
        }
    }

    int remainderSimple(int x, int y){
        return (x%y);
    }

    double squarerootSimple(int x){
        double root = sqrt(x);
        if (x>0){
            return(root);
        }

        else{
            return 0; //n is not positive
        }
    }

};


// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will print the Square of a Number of type ‘double’. However, please make
sure that you use the multiplication ability provided by the method multiplicationSimple() in
SimpleCalculator class. You will need to edit the class name as
“CalculateSquare_RegistrationNumber”.
NOTE 1: Since this is a basis for the rest of the assignment, most of the functionality has been completed
for you. Please go through the usage of multiplicationSimple() as a substitute for “*” i.e. instead of
writing y2 = y * y, we use y2 = simpleMultiplication(y, y). Please see how to create objects of a Class.
NOTE 2: You will need to fill the inputs required by multiplicationSimple(), to store the output and to
return it.
NOTE 3: The method for the implementation is called calculateSquare(). 
*/


class CalculateSquare__23BAI1314: public SimpleCalculator_23BAI1314 
{
    public:
    int calculateSquare(int y){
        int sqr= multiplicationSimple(y,y);
        return sqr;
    }
};

// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will implement the following functionality on prime numbers. Please edit
the class titled “PrimeNumber_RegistrationNumber”.
Check whether a number is prime or not
Method header already provided, called checkPrimeNumber(). Please edit this.
NOTE 1: Please make sure that the access modifiers for the methods are “public”.
NOTE 2: Please make sure to use remainderSimple() and not “%” to check for Prime. You will not get
any points if you don’t.
NOTE 3: Please make sure that the value returned by the method checkPrimeNumber() is of the type
“boolean”
*/


class PrimeNumber_23BAI1314: public SimpleCalculator_23BAI1314 
{
    public:
    bool checkPrimeNumber(int n){
        if (n <= 1){
            return false;
        }
            
        for (int i = 2; i <= n / 2; i++){
            if (remainderSimple(n,i) == 0)
                return false;
        }
            
        return true;
    }
};


// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will implement the following functionality on prime numbers. Please edit
the class titled “FibonacciNumber_RegistrationNumber”.
Print the first ’n’ fibonacci Numbers starting from 0 and 1.
Method header already provided, called printFibonacciNumbers(). Please edit this.
NOTE 1: Please make sure that the access modifiers for the methods are “public”.
NOTE 2: Please make sure to use additionSimple(), and not the operator “+”, while computing fibonacci
numbers. You will not get any points if you don’t. However, you may use “++” for the counter. 
*/


class FibonacciNumber_23BAI1314: public SimpleCalculator_23BAI1314 
{
    public:
    void printFibonacciNumbers(int n){
        int n1 = 0, n2 = 1, n3;
        
        cout<<n1<<" "<<n2<<" ";

        for(int i=2; i<n; i++){
            n3 = additionSimple(n1,n2);
            cout<<n3<<" ";
            n1 = n2;
            n2 = n3;
        }
        cout<<endl;
    }
};

// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will implement the Euclidean Distance. Please edit the class titled
“EuclideanDistance_RegistrationNumber”.
Implement the Euclidean Distance by taking two coordinates (x1, y1) and (x2, y2) as input.
1.1. Method header already provided, called calculateEuclideanDistance(). Please edit this.
1.2. Please make sure to use subtractionSimple() and squareRootSimple() while computing the
Euclidean Distance. You will not get any points if you don’t implement both.
1.3. Please remember to return the calculated distance.
NOTE 1: Please make sure that the access modifiers for the methods are “public”.
NOTE 2: Please make sure to use subtractionSimple() and squareRootSimple() while computing the
Euclidean Distance. You will not get any points if you don’t. 
*/


class EuclideanDistance_23BAI1314: public CalculateSquare__23BAI1314 
{
    public:
        void calculateEuclideanDistance(float x1, float y1, float x2, float y2){
            float dist,diffx,diffy,sqrx,sqry,add;
            diffx = subtractionSimple(x1,x2);
            diffy = subtractionSimple(y1,y2);
            sqrx = calculateSquare(diffx);
            sqry = calculateSquare(diffy);
            add = additionSimple(sqrx,sqry);
            dist = sqrt(add);
            cout<<"The distance between given points is: "<<dist<<" units"<<endl;
        }
};


// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will implement functionality on Palindrome Numbers. Please edit the class
titled “Palindrome_RegistrationNumber”.
Implement the check for whether a number (int) is a palindrome
1.1. Method header already provided, called checkPalindrome(). Please edit this.
1.2. Please remember to return a boolean indicating whether the number is a Palindrome or not.
NOTE 1: Please make sure that the access modifiers for the methods are “public”.
NOTE 2: Please make sure to use divisionSimple(), multiplicationSimple() , additionSimple and
remainderSimple() while checking for Palindrome. You will not get any points if you don’t. However,
you may use “++” for the counter.
*/


class Palindrome_23BAI1314: public SimpleCalculator_23BAI1314 
{
    public:
    bool checkPalindrome(int n)
    {
        int reversed = 0; 
        int remainder, original;
    
        original = n;

        while (n != 0) {
            remainder = remainderSimple(n,10);
            reversed = additionSimple(multiplicationSimple(reversed,10),remainder);
            n = divisionSimple(10,n);
        }

        if (original == reversed)
            return true;
        else
            return false;
    }
};


// ------------------------------------------------------------------------------------------------------------------------------------------//


/*
In this Sub Assignment, you will implement the main function to control the functionality of the
Calculator. Take a number as input and code a menu driven program in C++ which does the following.
1.1. If the number is 1, then ask the user to input a number, n. Print the Square of the number using the
method calculateSquare() in the class titled “CalculateSquare_RegistrationNumber” class. No points
will be given if you don’t use this method.
1.2. If the number is 2, then ask the user to input a number, n. Print whether the number, n, is a Prime
Number or not using the method checkPrimeNumber() in “PrimeNumber_RegistrationNumber”
class. No points will be given if you don’t use this method.
1.3. If the number is 3, then ask the user to input a number, n. Print the first n fibonacci numbers using
the method printFibonacciNumbers() in “FibonacciNumber_RegistrationNumber” class. No points
will be given if you don’t use this method.
1.4. If the number is 4, then ask the user to input two coordinates (x1, y1) and (x2, y2). Print the
euclidean distance between these two coordinates using calculateEuclideanDistance() in
“EuclideanDistance_RegistrationNumber” class. No points will be given if you don’t use this
method.
1.5. If the number is 5, then ask the user to input a number, n. Print whether the number, n, is a
Palindrome or not using the method checkPalindrome() in “Palindrome_RegistrationNumber” class.
No points will be given if you don’t use this method.
NOTE 1: Please make sure that the access modifiers for the methods are “public”.
*/


int main() 
{
    int choice;
    int n1,ans;
    cout << "1. Calculate Square" << endl;
    cout << "2. Check for Prime Number" << endl;
    cout << "3. Fibonacci Series" << endl;
    cout << "4. Find Euclidean Distance" << endl;
    cout << "5. Check if number is Pallindrome" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {

        case 1:{
            cout<<"Enter the number that you want the square of: ";
            cin>> n1;

            CalculateSquare__23BAI1314 obj1;
            ans=obj1.calculateSquare(n1);
            cout<<"The square of "<<n1<<" is: "<<ans<<endl;
            break;
        }

        case 2:{
            cout<<"Enter the number that you want to check: ";
            cin>> n1;

            PrimeNumber_23BAI1314 obj2;
            if (obj2.checkPrimeNumber(n1)==1)
            {
                cout<<"The number "<<n1<< " is a Prime Number"<<endl;
            }
            else if (obj2.checkPrimeNumber(n1)==0)
            {
                cout<<"The number "<<n1<< " is NOT a Prime Number"<<endl;
            }
            break;
        }

        case 3:{
            cout<<"Enter Number: ";
            cin>> n1;
            
            FibonacciNumber_23BAI1314 obj3;
            obj3.printFibonacciNumbers(n1);
            break;
            }

        case 4:{
            float x1,x2,y1,y2;
            cout<<"Enter Co-ordinates of first point: "<<endl;
            cout<<"x1: ";
            cin>>x1;
            cout<<"y1: ";
            cin>>y1;
            cout<<"Enter Co-ordinates of first point: "<<endl;
            cout<<"x2: ";
            cin>>x2;
            cout<<"y2: ";
            cin>>y2;
            EuclideanDistance_23BAI1314 obj4 ;
            obj4.calculateEuclideanDistance(x1,y1,x2,y2);
            break;
        }
        
        case 5:
        {
            cout<<"Enter the number that you want to check: ";
            cin>> n1;

            Palindrome_23BAI1314 obj5;
            if (obj5.checkPalindrome(n1)==1)
            {
                cout<<"The number "<<n1<< " is a Pallindrome"<<endl;
            }
            else if (obj5.checkPalindrome(n1)==0)
            {
                cout<<"The number "<<n1<< " is NOT a Pallindrome"<<endl;
            }
            break;
        }
        default: 
        {
            cout << "Invalid choice." << endl;
            break;
        }
    }
    
    return 0;
}
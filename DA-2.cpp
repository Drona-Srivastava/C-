#include <iostream>
#include <cmath>
using namespace std;

//PART-1
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
            return 0;
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
            return 0; 
        }
    }

};


// ------------------------------------------------------------------------------------------------------------------------------------------//


//PART-2
class CalculateSquare__23BAI1314: public SimpleCalculator_23BAI1314 
{
    public:
    int calculateSquare(int y){
        int sqr= multiplicationSimple(y,y);
        return sqr;
    }
};


// ------------------------------------------------------------------------------------------------------------------------------------------//


//PART-3
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


//PART-4
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


//PART-5
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


//PART-6
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


//PART-7
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
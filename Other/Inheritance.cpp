#include <iostream>
#include <string.h>
using namespace std;
class Employee{
    public:
        string name;
        int id;
        double salary;
        Employee(string name,int id,double salary){
            this->name = name;
            this->id = id;
            this-> salary = salary;
        }
        void displayinfo(){
            cout<<name<<endl;
            cout<<id<<endl;
            cout<<salary<<endl;
        }
};

class RegularEmployee:public Employee{
    public:
        RegularEmployee(string name,int id,double salary):Employee(name,id,salary){

        }
};

class Manager:public Employee{
    public:
    string department;
    Manager(string name, string department, int id, double salary):Employee(name,id,salary){
        this->department = department;
    }
    void displayinfo(){
        cout<<name<<endl;
        cout<<id<<endl;
        cout<<salary<<endl;
        cout<<department<<endl;
    }
};

int main(){
    int choice;
    cout<<"Tell Choice : ";
    cin>>choice;
    if(choice==1){
        string name;
        int id;
        double salary;
        cin>>name;
        cin>>id;
        cin>>salary;
        RegularEmployee reg(name,id,salary);
        reg.displayinfo();
    }
    else if(choice==2){
        string name;
        int id;
        double salary;
        string department;
        cin>>name;
        cin>>id;
        cin>>salary;
        cin>>department;
        Manager man(name,department,id,salary);
        man.displayinfo();
    }
}
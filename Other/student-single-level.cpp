#include <iostream>
#include <string.h>
using namespace std;
class Student{
    protected:
        char name[50];
        int rollno;
    public:
        void setData(const char[],int);
        void getData();
};

class Marks:public Student{
    protected:
        float cat1;
        float cat2;
        float fat;
    public:
        void setMarks(float,float,float);
        void getMarks();
};

void Student::setData(const char name1[50],int rollno){
    strcpy(name,name1);
    this->rollno = rollno;
}

void Student::getData(){
    cout<<"Student name: "<<name<<endl;
    cout<<"Roll No: "<<rollno<<endl;
}

void Marks::setMarks(float cat1,float cat2,float fat){
    this->cat1=cat1;
    this->cat2=cat2;
    this->fat=fat;
}

void Marks::getMarks(){
    cout<<"CAT-1: "<<cat1<<endl;
    cout<<"CAT-2: "<<cat2<<endl;
    cout<<"FAT: "<<fat<<endl;
}

int main(){
    Marks obj;
    char name[50];
    cout<<"Enter Name: "; 
    //cin>>name;  does not take name with spaces
    cin.getline(name, 50); // reads whole line including spaces
    obj.setData(name,1314);
    obj.setMarks(47,47,92);
    obj.getData();
    obj.getMarks();
}
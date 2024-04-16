#include <iostream>
#include <string>
using namespace std;
class Student{
    protected:
        string name;
        string rollno;
    public:
        void setData(string ,string );
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

void Student::setData(string name1,string rollno1){
    name = name1;
    rollno = rollno1;
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
    string name;
    cout<<"Enter Name: "; 
    //cin>>name; does not take name with spaces
    getline(cin, name); // Read full line including spaces
    obj.setData(name,"23BAI1314");
    obj.setMarks(47,47,92);
    obj.getData();
    obj.getMarks();
}
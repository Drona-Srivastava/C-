/*
Student Grade
Consider a class named Student which has the following features:
Instance variables 
name(string)
registerNo(string)
cat1(int)
cat2(int)
fat(int)
grade(char)
Constructor:
Student(-----------------------
Instance methods :
void calcPercentage()
void calcGrade()
void display()
Write a C++ code that takes a student details along with their CAT and FAT marks and displays the percentage and grades along with their name and register no. Assume each CAT exam is for a total of 30 marks and FAT exam is of 60 marks.  The marks are valid only if CAT marks is between 0 and 30 and FAT marks are between 0 and 60. For any other marks print ‘Wrong entry’. The grading pattern is as follows

Input Format:
In the first line, enter the name of the student
In the second line, enter the register number of that student
In the third line, enter marks obtained in CAT1 out of 30
In the fourth line, enter marks obtained in CAT2 out of 30
In the fifth line, enter the marks obtained in FAT out of 60

Output Format:
If either of the entered marks is/are invalid then just print “Wrong entry”
Else
In the first line, display the name of the entered student.
In the second line, display the register number of the same student
In the third line, display the percentage upto two decimal places obtained with a '%' sign at the end. Eg: 78.15%
In the fourth line, display the grade obtained

Sample Input:
Kumar Harsh
23bec0007
20
24
35

Sample Output:
Kumar Harsh
23bec0007
65.83%
C
*/

#include <iostream>
using namespace std;
class Student
{
private:
    int cat1;
    int cat2;
    int fat;
public:
    string name;
    string regno;
    double percentage;
    char grade;
    Student(string name1, string regno1, int cat11, int cat22, int fat1){
        name = name1;
        regno = regno1;
        cat1 = cat11;
        cat2 = cat22;
        percentage = 0.0;
        fat = fat1;
    }
    void calcPercentage() {
        if (cat1 >= 0 && cat1 <= 30 && cat2 >= 0 && cat2 <= 30 && fat >= 0 && fat <= 60) {
            double totalMarks = cat1 + cat2 + fat;
            percentage = (totalMarks / 120) * 100;
        } else {
            cout << "Wrong entry" << endl;
            exit(1);
        }
    }

    void calcGrade() {
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else if (percentage >= 50)
            grade = 'E';
        else
            grade = 'F';
    }
    void display() {
        cout << name << endl;
        cout << regno << endl;
        cout << percentage << "%" << endl;
        cout << grade << endl;
    }
};

int main()
{
    string name, registerNo;
    int cat1, cat2, fat;

    cin >> name;
    cin >> registerNo;
    cin >> cat1;
    cin >> cat2;
    cin >> fat;
    Student student(name, registerNo, cat1, cat2, fat);

    student.calcPercentage();
    student.calcGrade();

    student.display();
}

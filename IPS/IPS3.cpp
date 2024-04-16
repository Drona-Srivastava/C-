/*
Vehicle-Car Inheritance
A Vehicle class has four parameters (company (string), colour (string), year of manufacture (int), and model name (string)) which are initialized using a constructor using this operator. This class also has a vehicleDisplay() method that prints all these details of a vehicle.
A Car class inherits the Vehicle class along with an additional parameter named “body type”. The constructor of this class initializes its own parameter using this operator. It also has a method named as carDisplay() that prints all the four parameters of the Vehicle class and one parameter of the Car class. The yearCheck() is a function of Car class and checks the year of manufacture to be a valid one containing four digits only and year must be 2000 and above. This function prints “Invalid entry” for this field if it does not match the given condition else it prints the year of manufacture.
Create an object of the Car class in the Main class and print the details of the car as explained above.
Note: There will be three classes in total: Vehicle, Car, and Main
Sample Input:
Tata
Green
2021
Nexon
Sedan

Sample Output:
Company: Tata
Colour: Green
Year of Manufacture: 2021
Model Name: Nexon
Body Type: Sedan
*/
#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string company;
    string colour;
    int year;
    string model;

public:
    Vehicle(string company, string colour, int year, string model) {
        this->company = company;
        this->colour = colour;
        this->year = year;
        this->model = model;
    }

    void vehicledisp() {
        // Display vehicle information
    }
};

class Car : public Vehicle {
protected:
    string body;

public:
    Car(string company, string colour, int year, string model, string body)
        : Vehicle(company, colour, year, model) {
        this->body = body;
    }

    void checkYear() {
        if (year > 9999 || year <= 2000) {
            cout << "Invalid Entry" << endl;
        } else {
            cout << year << endl;
        }
    }

    void cardisp() {
        cout << "Company: " << company << endl;
        cout << "Colour: " << colour << endl;
        cout << "Year of Manufacture: ";
        checkYear(); // Call checkYear without return value
        cout << "Model Name: " << model << endl;
        cout << "Body Type: " << body << endl;
    }
};

int main() {
    string comp, color, model, body;
    int year;
    cin >> comp;
    cin >> color;
    cin >> year;
    cin >> model;
    cin >> body;
    Car obj(comp, color, year, model, body);
    obj.cardisp();
    return 0;
}

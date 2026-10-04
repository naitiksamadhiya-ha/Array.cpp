#include <iostream>
#include <string>
using namespace std;

// Single Inheritance
class Person
{
protected:
    string name;
    int age;

public:
    void getPersonData()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter age: ";
        cin >> age;
    }
};

class Student : public Person
{
    int rollNo;

public:
    void getStudentData()
    {
        getPersonData();

        cout << "Enter roll number: ";
        cin >> rollNo;
    }

    void displayStudent()
    {
        cout << "\nStudent Details:" << endl;
        cout << "Name       : " << name << endl;
        cout << "Age        : " << age << endl;
        cout << "Roll No.   : " << rollNo << endl;
    }
};


// Multilevel Inheritance
class Vehicle
{
protected:
    string brand;

public:
    void getVehicleData()
    {
        cout << "\nEnter vehicle brand: ";
        cin >> brand;
    }
};

class Car : public Vehicle
{
protected:
    string model;

public:
    void getCarData()
    {
        getVehicleData();

        cout << "Enter car model: ";
        cin >> model;
    }
};

class ElectricCar : public Car
{
    int batteryCapacity;

public:
    void getElectricCarData()
    {
        getCarData();

        cout << "Enter battery capacity (kWh): ";
        cin >> batteryCapacity;
    }

    void displayElectricCar()
    {
        cout << "\nElectric Car Details:" << endl;
        cout << "Brand            : " << brand << endl;
        cout << "Model            : " << model << endl;
        cout << "Battery Capacity : " << batteryCapacity << " kWh" << endl;
    }
};


int main()
{
    // Single Inheritance
    Student s;

    cout << "SINGLE INHERITANCE" << endl;
    s.getStudentData();
    s.displayStudent();

    // Multilevel Inheritance
    ElectricCar e;

    cout << "\nMULTILEVEL INHERITANCE" << endl;
    e.getElectricCarData();
    e.displayElectricCar();

    return 0;
}
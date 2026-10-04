#include <iostream>
using namespace std;

class Employee
{
    int salary, bonus;

public:

    // Default constructor
    Employee()
    {
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int s, int b)
    {
        salary = s;
        bonus = b;
    }

    void display()
    {
        cout << "Salary = " << salary << endl;
        cout << "Bonus = " << bonus << endl;
        cout << "Total Salary = " << salary + bonus << endl;
    }
};

int main()
{
    int salary, bonus;

    cout << "Enter salary: ";
    cin >> salary;

    cout << "Enter bonus: ";
    cin >> bonus;

    // Parameterized constructor
    Employee e1(salary, bonus);

    cout << "\nEmployee Details:" << endl;
    e1.display();

    return 0;
}
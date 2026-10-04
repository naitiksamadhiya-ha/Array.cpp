#include <iostream>
using namespace std;

class ClassB;
class Result;

class ClassA
{
    int num1;
    static int count;

public:
    void getData()
    {
        cout << "Enter value for Class A: ";
        cin >> num1;
        count++;
    }

    static void displayCount()
    {
        cout << "\nTotal objects created: " << count << endl;
    }

    friend void compare(ClassA, ClassB);
    friend class Result;
};

int ClassA::count = 0;

class ClassB
{
    int num2;

public:
    void getData()
    {
        cout << "Enter value for Class B: ";
        cin >> num2;
    }

    friend void compare(ClassA, ClassB);
};

class Result
{
public:
    void display(ClassA a)
    {
        cout << "\nValue of Class A = " << a.num1 << endl;
    }
};

// Friend function
void compare(ClassA a, ClassB b)
{
    if (a.num1 > b.num2)
        cout << "Class A has the greater value." << endl;
    else if (b.num2 > a.num1)
        cout << "Class B has the greater value." << endl;
    else
        cout << "Both values are equal." << endl;
}

int main()
{
    ClassA a;
    ClassB b;
    Result r;

    a.getData();
    b.getData();

    // Static member function
    ClassA::displayCount();

    // Friend function
    compare(a, b);

    // Friend class
    r.display(a);

    return 0;
}
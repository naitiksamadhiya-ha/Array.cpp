#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    // Function defined inside the class
    void accept()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    // Function declarations
    float area();
    float perimeter();

    void display()
    {
        cout << "\nArea = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

// Functions defined outside the class
float Rectangle::area()
{
    return length * breadth;
}

float Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int main()
{
    Rectangle r;

    r.accept();
    r.display();

    return 0;
}
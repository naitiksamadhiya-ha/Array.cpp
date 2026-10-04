#include <iostream>
using namespace std;

class Book
{
    string title;
    string author;
    float price;

public:

    // Parameterized constructor
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    // Copy constructor
    Book(const Book &b)
    {
        title = b.title;
        author = b.author;
        price = b.price;
    }

    // Destructor
    ~Book()
    {
        cout << "Destructor called" << endl;
    }

    void display()
    {
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }
};

int main()
{
    string title, author;
    float price;

    cout << "Enter book title: ";
    cin >> title;

    cout << "Enter author name: ";
    cin >> author;

    cout << "Enter price: ";
    cin >> price;

    // Original object using parameterized constructor
    Book b1(title, author, price);

    // Copied object using copy constructor
    Book b2(b1);

    cout << "\nOriginal Book Details:" << endl;
    b1.display();

    cout << "\nCopied Book Details:" << endl;
    b2.display();

    return 0;
}
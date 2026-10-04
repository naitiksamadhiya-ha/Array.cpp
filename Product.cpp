#include <iostream>
#include <string>
using namespace std;

class Product
{
    string name;
    float price;
    int monthlySales[12];

public:
    void getData()
    {
        cout << "Enter product name: ";
        cin >> name;

        cout << "Enter price: ";
        cin >> price;

        cout << "Enter sales for 12 months:\n";
        for (int i = 0; i < 12; i++)
        {
            cout << "Month " << i + 1 << ": ";
            cin >> monthlySales[i];
        }
    }

    int totalQuantity()
    {
        int total = 0;

        for (int i = 0; i < 12; i++)
        {
            total += monthlySales[i];
        }

        return total;
    }

    float totalBill()
    {
        return totalQuantity() * price;
    }

    void display()
    {
        cout << "\nProduct Name   : " << name;
        cout << "\nPrice          : " << price;
        cout << "\nTotal Quantity : " << totalQuantity();
        cout << "\nTotal Bill     : " << totalBill();
        cout << "\n-----------------------------\n";
    }
};

int main()
{
    int n;

    cout << "Enter number of products: ";
    cin >> n;

    Product products[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        products[i].getData();
    }

    cout << "\n========== PRODUCT DETAILS ==========\n";

    for (int i = 0; i < n; i++)
    {
        products[i].display();
    }

    return 0;
}
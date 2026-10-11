#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;

    double subtotal, tax, total;

    subtotal = item1 + item2 + item3 + item4 + item5;
    tax = subtotal * 0.06;
    total = subtotal + tax;

    cout << fixed << setprecision(2);

    cout << "Price of item 1 = $" << item1 << endl;
    cout << "Price of item 2 = $" << item2 << endl;
    cout << "Price of item 3 = $" << item3 << endl;
    cout << "Price of item 4 = $" << item4 << endl;
    cout << "Price of item 5 = $" << item5 << endl;

    cout << "Subtotal = $" << subtotal << endl;
    cout << "Sales Tax = $" << tax << endl;
    cout << "Total = $" << total << endl;

    return 0;
}

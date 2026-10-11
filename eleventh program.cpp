#include <iostream>
using namespace std;

int main()
{
    int number;
    int d1, d2, d3, d4, d5;

    cout << "Enter a five-digit number: ";
    cin >> number;

    d1 = number / 10000;
    d2 = (number / 1000) % 10;
    d3 = (number / 100) % 10;
    d4 = (number / 10) % 10;
    d5 = number % 10;

    cout << d1 << "   "
         << d2 << "   "
         << d3 << "   "
         << d4 << "   "
         << d5 << endl;

    return 0;
}

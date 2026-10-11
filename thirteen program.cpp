#include <iostream>
using namespace std;

int main()
{
    char letter;

    cout << "Enter a lowercase alphabet: ";
    cin >> letter;

    letter = letter - 32;

    cout << "Uppercase alphabet = " << letter << endl;

    return 0;
}

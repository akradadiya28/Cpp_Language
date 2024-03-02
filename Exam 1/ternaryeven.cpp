#include <iostream>
using namespace std;

// WAP to check whether a number is even or odd using the ternary operator.

int main()
{

    int num;

    cout << "Enter the number: ";
    cin >> num;

    (num % 2 == 0)
        ? cout << "this is even number"
        : cout << "this is odd number";
    return 0;
}
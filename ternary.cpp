#include <iostream>
using namespace std;

// WAP to find maximum number using ternay operator.

int main()
{

    int a, b;

    cout << "enter the value of a and b: " << endl;
    cin >> a >> b;

    (a > b)
        ? cout << "a is max..." << endl
        : cout << "b is max..." << endl;

    return 0;
}
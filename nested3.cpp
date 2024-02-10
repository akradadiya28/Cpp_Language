#include <iostream>
using namespace std;

// WPA to find the minimum number from the given 3 numbers using nested if else.

int main()
{
    int a, b, c;

    cout << "Enter values of a,b and c: " << endl;
    cin >> a >> b >> c;

    if (a == b && a == c && b == c)
    {
        cout << "All values are same 😀" << endl;
    }
    else
    {
        if (a < b)
        {
            if (a < c)
            {
                cout << "a is minimum..." << endl;
            }
            else
            {
                cout << "c is minimum..." << endl;
            }
        }
        else
        {
            if (b < c)
            {
                cout << "b is minimum..." << endl;
            }
            else
            {
                cout << "c is minimum..." << endl;
            }
        }
    }
    return 0;
}

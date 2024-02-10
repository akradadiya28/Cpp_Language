#include <iostream>
using namespace std;

// WAP to find the maximum number from given four numbers.

int main()
{
    int a, b, c, d;

    cout << "Enter value of a,b,c and d: " << endl;
    cin >> a >> b >> c >> d;

    if (a == b && b == c && c == d && a == c && a == d && b == a && b == d && d == a && d == b)
    {
        cout << "All values are same 😀" << endl;
    }
    else
    {
        if (a > b)
        {
            if (a > c)
            {
                if (a > d)
                {
                    cout << "a is max..." << endl;
                }
                else
                {
                    cout << "d is max..." << endl;
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "c is max..." << endl;
                }
                else
                {
                    cout << "d is max..." << endl;
                }
            }
        }
        else
        {
            if (b > c)
            {
                if (b > d)
                {
                    cout << "b is max..." << endl;
                }
                else
                {
                    cout << "d is max..." << endl;
                }
            }
            else
            {
                if (c > d)
                {
                    cout << "c is max..." << endl;
                }
                else
                {
                    cout << "d is max..." << endl;
                }
            }
        }
    }

    return 0;
}

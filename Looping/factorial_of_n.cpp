#include <iostream>
using namespace std;
int main()
{
    int i, n, fact;
    fact = 1;

    cout << "enter any number: ";
    cin >> n;

    i = n;

    while (i >= 1)
    {
        fact = fact * i;
        i--;
    }

    cout << "factorial is = " << fact << endl;

    return 0;
}
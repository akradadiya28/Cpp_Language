#include <iostream>
using namespace std;
int main()
{
    int i, n, sum;

    sum = 0;

    cout << "enter any number: ";
    cin >> n;

    i = 1;

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    cout << "sum is = " << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int num, sum, firstDigit, lastDigit;

    sum = 0;

    cout << "enter any number: ";
    cin >> num;

    lastDigit = num % 10;

    while (num >= 10)
    {
        num = num / 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;

    cout << "sum is: " << sum << endl;

    return 0;
}
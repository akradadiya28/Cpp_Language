#include <iostream>
using namespace std;
int main()
{
    int num, sum, lastDigit;

    sum = 0;

    cout << "enter any number: ";
    cin >> num;

    while (num > 0)
    {
        lastDigit = num % 10;
        sum = sum + lastDigit;
        num = num / 10;
    }
    cout << "sum of digits: " << sum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int num, sum, lastdigit;

    sum = 0;

    cout << "enter any number: ";
    cin >> num;

    while (num > 0)
    {
        lastdigit = num % 10;
        sum = sum + lastdigit;
        num = num / 10;
    }
    cout << "sum of digits: " << sum << endl;

    return 0;
}
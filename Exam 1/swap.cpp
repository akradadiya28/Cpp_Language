#include <iostream>
using namespace std;
int main()
{

    char a, b, c;

    cout << "enter the value of a and b: ";
    cin >> a >> b;

    c = a;
    a = b;
    b = c;

    cout << a << b << endl;

    return 0;
}
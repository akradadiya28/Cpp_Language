#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p; // pointer p

    p = &a;

    cout << "Address is " << p << endl;
    cout << "value is " << *p << endl; // value of p

    return 0;
}

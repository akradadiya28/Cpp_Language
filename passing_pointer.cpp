#include <iostream>
using namespace std;

void hello_pointer(int *ptr)
{
    cout << ptr << " & " << *ptr << endl;
}

void pointer(int *ptr)
{
    cout << ptr << " & " << *ptr << endl;
}

int main()
{
    int x = 10;
    int *p = &x;

    hello_pointer(p); // pass a pointer

    pointer(&x); // pass an address

    return 0;
}

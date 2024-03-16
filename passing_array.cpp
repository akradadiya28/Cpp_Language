#include <iostream>
using namespace std;

void func(int n[])
{
    cout << n[0] << endl;
}

int main()
{
    int a[] = {12, 34, 54};

    func(a);

    return 0;
}

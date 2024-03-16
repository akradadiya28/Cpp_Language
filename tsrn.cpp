#include <iostream>
using namespace std;
// function declaration
void mul(int, int); //<== parameters

int main()
{
    int x, y;

    cout << "enter x and y" << endl;
    cin >> x >> y;

    mul(x, y);

    return 0;
}

void mul(int a, int b)
{
    cout << "Mul is=" << a * b << endl;
}
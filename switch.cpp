#include <iostream>
using namespace std;

// WAP to create a menu-driven program for create a Calculator's functionality.

int main()
{
    int a, b, add, divide, mul, divison, mod;

    int choice;

    cout << "Entere value of a and b: " << endl;
    cin >> a >> b;

    cout << "Press 1 for +" << endl;
    cout << "Press 2 for -" << endl;
    cout << "Press 3 for *" << endl;
    cout << "Press 4 for /" << endl;
    cout << "Press 5 for %" << endl;

    cout << "Entere Your Choice: " << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        add = a + b;
        cout << "Addittion is = " << add << endl;
        break;
    case 2:
        divide = a - b;
        cout << "Divide is = " << divide << endl;
        break;
    case 3:
        mul = a * b;
        cout << "Multiplication is = " << mul << endl;
        break;
    case 4:
        divison = a / b;
        cout << "Divison is = " << divison << endl;
        break;
    case 5:
        mod = a % b;
        cout << "Modulas is = " << mod << endl;
        break;
    }
    return 0;
}
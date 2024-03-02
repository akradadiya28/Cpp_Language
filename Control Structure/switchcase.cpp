#include <iostream>
using namespace std;

// WAP to print a day based on given character.

int main()
{

    char day;

    cout << "enter a character: ";
    cin >> day;

    switch (day)
    {
    case 'm':
        cout << "Monday" << endl;
        break;
    case 't':
        cout << "Tuesday" << endl;
        break;
    case 'w':
        cout << "Wednesday" << endl;
        break;
    case 'T':
        cout << "Thursday" << endl;
        break;
    case 'f':
        cout << "Friday" << endl;
        break;
    case 's':
        cout << "Saturday" << endl;
        break;
    case 'S':
        cout << "Sunday" << endl;
        break;
    }

    return 0;
}
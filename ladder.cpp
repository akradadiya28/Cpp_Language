#include <iostream>
using namespace std;

// WAP to check person is capable for voting or not.

int main(){

    int age;

    cout << "Enter Your Age: ";
    cin >> age;

    if(age < 18)
    {
        cout << "you can't vote..." << endl;
    }
    else if(age > 18)
    {
        cout << "you can vote..." << endl;
    }
    else if(age == 18)
    {
        cout << "you can also vote..." << endl;
    }

    return 0;
}
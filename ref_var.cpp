#include <iostream>
using namespace std;

int main()
{
    int arpit = 100;
    int &ak = arpit;    // deep copy
    int prince = arpit; // shallow copy

    cout << arpit << " & " << ak << endl;
    cout << arpit << " & " << prince << endl;

    arpit = 500;

    cout << "deep copy: " << arpit << " & " << ak << endl;
    cout << "shallow copy: " << arpit << " & " << prince << endl;

    return 0;
}

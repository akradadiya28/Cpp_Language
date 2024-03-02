#include <iostream>
using namespace std;
int main()
{
    // int a[5] = {6, 8, 4, 3, 5};
    int a[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        cout << "enter array elemnet: ";
        cin >> a[i];
    }
    cout << "array elemnets: " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
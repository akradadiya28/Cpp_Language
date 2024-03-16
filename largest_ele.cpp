#include <iostream>
using namespace std;
int main()
{
    int i, j, a[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter array elements: "
                 << endl;
            cin >> a[3][3];
        }
    }
    cout << ".............................." << endl
         << endl;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << i << " " << j << " " << endl;
        }
    }

    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int i, j, n, row;

    cout << "Enter Row: ";
    cin >> row;

    n = 1;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << n << " ";
            n++;
        }
        cout << endl;
    }

    return 0;
}
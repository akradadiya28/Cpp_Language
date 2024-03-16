#include <iostream>
using namespace std;
int main()
{
    int i, j;

    for (i = 10; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 9)
            {
                cout << "% ";
            }
            else
            {
                cout << "@ ";
            }
        }
        cout << endl;
    }

    return 0;
}
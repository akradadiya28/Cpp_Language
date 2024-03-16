#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a[5] = {2, 8, 4, 9, 3};
    int *p[5];

    int i;

    for (i = 0; i <= 4; i++)
    {
        p[i] = &a[i];
    }

    for (i = 0; i <= 4; i++)
    {
        printf("Address: %u, Value: %d\n", p[i], *p[i]);
    }
    return 0;
}

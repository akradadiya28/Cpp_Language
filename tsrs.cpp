#include <iostream>
using namespace std;

int get_cube(int);

int main()
{
    // cout << get_cube(5) << endl;

    int ans = get_cube(5);

    cout << ans << endl;

    return 0;
}

int get_cube(int a)
{
    return a * a * a;
}
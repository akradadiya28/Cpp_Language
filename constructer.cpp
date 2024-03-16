#include <iostream>
using namespace std;
class test
{
public:
    // udf
    test()
    {
        cout << "\nconstructor executed";
    }
    ~test()
    {
        cout << "\nDesturctor executed";
    }
};
int main()
{

    return 0;
}
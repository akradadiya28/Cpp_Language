#include <iostream>
using namespace std;

void prince()
{
    cout << "i am prince..." << endl;
}

void arpit()
{
    cout << "i am arpit..." << endl;
    prince();
}

int main()
{
    arpit();

    return 0;
}

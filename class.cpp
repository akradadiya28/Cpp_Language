#include <iostream>
using namespace std;
class Circle
{
public:
    float r;
    void getRadius()
    {
        cout << "enter radius of circle:";
        cin >> r;
    }
    void printArea()
    {
        double area;
        area = 3.14 * r * r;
        cout << "area of circle with = " << r << " cm radius = " << area << " cm." << endl;
    }
};
int main()
{
    Circle c;
    c.getRadius();
    c.printArea();
    return 0;
}
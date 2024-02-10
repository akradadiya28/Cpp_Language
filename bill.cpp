#include <iostream>
using namespace std;

int main()
{
    double price, gst, total;

    cout << "Enter the price of the item: ";
    cin >> price;

    cout << "Enter the GST rate in percentage: ";
    cin >> gst;

    total = price + (price * gst / 100);

    cout << "The total bill is: " << total << endl;

    return 0;
}
#include <iostream>

int main()
{
    using namespace std;

    cout << "liters per 100 kilometers: ";
    double liters;
    cin >> liters;

    double gallons = liters / 3.875;
    double mpg = 62.14 / gallons;

    cout << mpg << " mpg." << endl;
}
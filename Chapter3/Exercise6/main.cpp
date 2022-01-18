#include <iostream>

int main()
{
    using namespace std;

    cout << "Enter how many miles you have driven: ";
    double miles;
    cin >> miles;

    cout << "Enter how many gallons of gasoline you have used: ";
    double gallons;
    cin >> gallons;

    double mpg = miles / gallons;
    cout << "Miles per gallon your car has gotten is " << mpg << "miles/gallon." << endl;
}
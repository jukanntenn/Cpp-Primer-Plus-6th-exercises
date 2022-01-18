#include <iostream>

int main()
{
    using namespace std;

    int inches;

    cout << "Enter your height in inches: "
         << "______"
         << "\b\b\b\b\b\b";
    cin >> inches;

    const int factor = 12;
    int feet = inches / 12;
    int left_inches = inches % 12;

    cout << "Your height is " << feet << " feet " << left_inches << " inches" << endl;
}
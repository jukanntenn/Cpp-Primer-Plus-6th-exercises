#include <iostream>

double harmonic_mean(double, double);

int main()
{
    using namespace std;

    double x, y;

    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    while (x != 0 || y != 0)
    {
        double hm = harmonic_mean(x, y);
        cout << "Harmonic mean of pair (" << x << ", " << y << ") is " << hm << endl;

        cout << "Enter x: ";
        cin >> x;
        cout << "Enter y: ";
        cin >> y;
    }

    cout << "Bye\n";
}

double harmonic_mean(double x, double y)
{
    return 2.0 * x * y / (x + y);
}
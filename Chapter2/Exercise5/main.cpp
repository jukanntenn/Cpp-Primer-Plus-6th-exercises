#include <iostream>

double c2f(double);

int main()
{
    using namespace std;

    double c;
    cout << "Please enter a Celsius value: ";
    cin >> c;

    double f = c2f(c);
    cout << c << " degrees Celsius is " << f << " degrees Fahrenheit." << endl;
}

double c2f(double c)
{
    return 1.8 * c + 32.0;
}
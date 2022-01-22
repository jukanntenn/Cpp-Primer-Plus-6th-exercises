#include <iostream>

using namespace std;

double add(double, double);
double multiply(double, double);
double sub(double, double);
double calculate(double, double, double (*f)(double, double));

int main()
{
    double (*f[3])(double, double) = {add, multiply, sub};
    for (int i = 0; i < 3; i++)
    {
        double n1, n2;
        cout << "Enter pair:\n";
        cout << "Number 1: ";
        cin >> n1;
        cout << "Number 2: ";
        cin >> n2;
        double result = calculate(n1, n2, f[i]);
        cout << "Result: " << result << endl;
    }
    return 0;
}

double add(double a, double b)
{
    return a + b;
}
double multiply(double a, double b)
{
    return a * b;
}
double sub(double a, double b)
{
    return a - b;
}
double calculate(double x, double y, double (*f)(double, double))
{
    return f(x, y);
}
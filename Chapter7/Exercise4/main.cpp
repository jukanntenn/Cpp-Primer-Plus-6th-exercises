#include <iostream>

long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices, power;
    cout << "Enter the total number of fields numbers, the number of picks allowed, number of power balls:\n";
    while ((cin >> total >> choices >> power) && choices <= total)
    {
        cout << "You have one chance in ";
        cout << probability(total, choices) * probability(power, 1);
        cout << " of winning.\n";
        cout << "Next 3 numbers (q to quit): ";
    }
    cout << "bye\n";
    return 0;
}

long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0; // here come some local variables
    long double n;
    unsigned p;
    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
    return result;
}
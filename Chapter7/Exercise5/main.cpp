#include <iostream>

long double probability(unsigned numbers, unsigned picks);

long long factorial(unsigned n);

int main()
{
    using namespace std;
    unsigned n;
    cout << "Enter a number n: ";
    cin >> n;
    while (cin)
    {
        long long result = factorial(n);
        cout << n << "! = " << result << endl;
        cout << "Enter a number n (q to quit): ";
        cin >> n;
    }
    cout << "Bye!\n";
}

long long factorial(unsigned n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
#include <iostream>

int main()
{
    using namespace std;

    int integer1;
    int integer2;
    int sum = 0;

    cout << "Enter first integer: ";
    cin >> integer1;
    // cin.get();

    cout << "Enter second integer: ";
    cin >> integer2;

    for (int i = integer1; i <= integer2; i++)
    {
        sum += i;
    }

    cout << "Sum of all the integers between and including " << integer1 << " and " << integer2 << " is " << sum << endl;
}
#include <iostream>

int main()
{
    using namespace std;

    double csum = 0;
    double number;

    cout << "Enter a number: ";
    cin >> number;
    while (number != 0)
    {
        csum += number;
        cout << "Cumulative sum of the entries to date is " << csum << endl;
        cout << "Enter a number: ";
        cin >> number;
    }
    return 0;
}
#include <iostream>

int main()
{
    using namespace std;

    int income;
    int tax_owed = 0;

    cout << "Enter income: ";
    cin >> income;

    while (cin && income >= 0)
    {
        if (income <= 5000)
        {
            tax_owed = 0;
        }
        else if (income > 5000 && income <= 15000)
        {
            tax_owed = (income - 5000) * 0.1;
        }
        else if (income > 15000 && income <= 35000)
        {
            tax_owed = 10000 * 0.1 + (income - 15000) * 0.15;
        }
        else
        {
            tax_owed = 10000 * 0.1 + 20000 * 0.15 + (income - 35000) * 0.2;
        }
        cout << "Tax owed: " << tax_owed << endl;

        cout << "Enter income: ";
        cin >> income;
    }
    cout << "Bye!\n";
    return 0;
}
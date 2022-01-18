#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[12];

    for (int i = 0; i < 12; i++)
    {
        cout << "Enter sales in " << months[i] << ": ";
        cin >> sales[i];
    }

    int total_sales = 0;
    for (int i = 0; i < 12; i++)
    {
        total_sales += sales[i];
    }
    cout << "Total sales: " << total_sales << endl;
}
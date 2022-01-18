#include <iostream>
#include <string>

int main()
{
    using namespace std;

    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[3][12];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cout << "Enter sales for " << i + 1 << " year in " << months[j] << ": ";
            cin >> sales[i][j];
        }
    }

    int total_sales = 0;
    for (int i = 0; i < 3; i++)
    {
        int total_sales_this_year = 0;
        for (int j = 0; j < 12; j++)
        {
            total_sales_this_year += sales[i][j];
        }
        cout << "Total sales in " << i + 1 << " year: " << total_sales_this_year << endl;
        total_sales += total_sales_this_year;
    }

    cout << "Total sales: " << total_sales << endl;
}
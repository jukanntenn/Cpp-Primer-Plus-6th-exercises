#include <iostream>

const int Seasons = 4;
const char *Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

void fill(double ar[]);
void show(const double ar[]);

int main()
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);
    return 0;
}

void fill(double ar[])
{
    using namespace std;
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses: ";
        cin >> ar[i];
    }
}

void show(const double ar[])
{
    using namespace std;
    double total = 0.0;
    cout << "\nEXPENSES\n";

    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << ar[i] << endl;
        total += ar[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
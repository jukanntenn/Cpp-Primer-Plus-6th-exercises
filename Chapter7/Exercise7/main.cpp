#include <iostream>

const int Max = 5;

double *fill_array(double ar[], int limit);
void show_array(const double ar[], double *);
void revalue(double r, double ar[], double *);

int main()
{
    using namespace std;
    double properties[Max];
    double *last = fill_array(properties, Max);
    show_array(properties, last);
    if (properties != last)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, last);
        show_array(properties, last);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

double *fill_array(double ar[], int limit)
{
    using namespace std;
    double temp;
    int i;
    for (i = 0; i < limit; i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin) // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)
        {
            break;
        }
        ar[i] = temp;
    }
    if (i == 0)
    {
        return 0;
    }

    return &ar[i - 1];
}

void show_array(const double ar[], double *last)
{
    using namespace std;
    int j = 0;
    for (const double *i = ar; i <= last; i++, j++)
    {
        cout << "Property #" << (j + 1) << ": $";
        cout << *i << endl;
    }
}

void revalue(double r, double ar[], double *last)
{
    for (double *i = ar; i <= last; i++)
        *i *= r;
}
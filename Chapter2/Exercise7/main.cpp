#include <iostream>

void displayTime(int, int);

int main()
{
    using namespace std;

    int hours, minutes;
    cout << "Enter the number of hours: ";
    cin >> hours;

    cout << "Enter the number of minutes: ";
    cin >> minutes;

    displayTime(hours, minutes);
}

void displayTime(int h, int m)
{
    using namespace std;

    cout << "Time: " << h << ":" << m << endl;
}
#include <iostream>

int main()
{
    using namespace std;

    int degree;
    int minutes;
    int seconds;

    cout << "Enter a latitute in degree, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degree;

    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;

    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    double result = degree + minutes / 60.0 + seconds / 3600.0;
    cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << result << " degrees" << endl;
}
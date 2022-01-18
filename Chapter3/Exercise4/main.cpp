#include <iostream>

int main()
{
    using namespace std;

    long long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    const int spm = 60;
    const int mph = 60;
    const int hpd = 24;

    int s = seconds % spm;
    int m = seconds / spm;
    int h = m / mph;
    m = m % mph;
    int d = h / hpd;
    h = h % hpd;

    cout << seconds << " seconds = " << d << " days, " << h << " hours, " << m << " minutes, " << s << " seconds" << endl;
}
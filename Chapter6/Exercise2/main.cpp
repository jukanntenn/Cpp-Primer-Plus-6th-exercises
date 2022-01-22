#include <iostream>
#include <cctype>
#include <array>

int main()
{
    using namespace std;

    const int ArSize = 10;
    array<double, ArSize> donations;
    double sum = 0;
    int cnt = 0;

    int i;
    for (i = 0; i < ArSize; i++)
    {
        cout << "Enter donation value #" << i + 1 << ": ";
        cin >> donations[i];
        if (!cin)
        {
            break;
        }
        else
        {
            sum += donations[i];
            cnt++;
        }
    }

    double avg = sum / cnt;
    cout << "Average: " << avg << endl;
    int num = 0;
    for (int j = 0; j < cnt; j++)
    {
        if (donations[j] > avg)
        {
            num++;
        }
    }
    cout << num << " numbers in the array are larger than the average.\n";
    return 0;
}
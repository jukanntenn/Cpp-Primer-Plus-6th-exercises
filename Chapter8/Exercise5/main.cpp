#include <iostream>

using namespace std;

template <typename T>
T max5(T arr[]);

int main()
{
    int iarr[5] = {1, 5, 2, 4, 3};
    double darr[5] = {1.4, 5.6, 5.1, 5.8, 3.1};

    cout << max5(iarr) << endl;
    cout << max5(darr) << endl;
    return 0;
}

template <typename T>
T max5(T arr[])
{
    T max = arr[0] < arr[1] ? arr[1] : arr[0];
    for (int i = 2; i < 5; i++)
    {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}
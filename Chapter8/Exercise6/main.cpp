#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
T maxn(T arr[], int n);

template <>
char *maxn(char *arr[], int n);

int main()
{
    int iarr[6] = {1, 5, 2, 4, 3, 2};
    double darr[4] = {1.4, 5.6, 5.1, 3.1};

    cout << maxn(iarr, 6) << endl;
    cout << maxn(darr, 4) << endl;

    char *sarr[5] = {"word", "test", "yufuquant.yq", "yufuquant.cc", "test2"};
    cout << maxn(sarr, 5) << endl;
    return 0;
}

template <typename T>
T maxn(T arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    T max = arr[0] < arr[1] ? arr[1] : arr[0];
    for (int i = 2; i < n; i++)
    {
        max = max < arr[i] ? arr[i] : max;
    }
    return max;
}

template <>
char *maxn(char *arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }

    char *p;
    int max_len = 0;
    for (int i = 0; i < n; i++)
    {
        int len = strlen(arr[i]);
        if (len > max_len)
        {
            p = arr[i];
            max_len = len;
        }
    }
    return p;
}
#include <algorithm>
#include <iostream>

int reduce(long ar[], int n);

int main()
{
    long ar[] = {4, 3, 1, 1, 5, 2, 3, 4, 3, 1};
    int result = reduce(ar, 10);
    for (int i = 0; i < result; i++)
    {
        std::cout << ar[i];
    }
    std::cout << "\n";

    return 0;
}

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    long *last = std::unique(ar, ar + n);
    int i = 0;
    while (ar + i != last)
    {
        i++;
    }
    return i;
}
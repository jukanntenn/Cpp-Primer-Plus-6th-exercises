#include <algorithm>
#include <iostream>
#include <string>

template <class T>
int reduce(T ar[], int n);

int main()
{
    long ar[] = {4, 3, 1, 1, 5, 2, 3, 4, 3, 1};
    int result = reduce(ar, 10);
    for (int i = 0; i < result; i++)
    {
        std::cout << ar[i];
    }
    std::cout << "\n";

    std::string sar[] = {"abc",
                         "bcd",
                         "efg",
                         "abc",
                         "aaaa",
                         "bbbb",
                         "eee",
                         "bbbb",
                         "aaaa"};
    result = reduce(sar, 9);
    for (int i = 0; i < result; i++)
    {
        std::cout << sar[i] << std::endl;
    }
    return 0;
}

template <class T>
int reduce(T ar[], int n)
{
    std::sort(ar, ar + n);
    T *last = std::unique(ar, ar + n);
    int i = 0;
    while (ar + i != last)
    {
        i++;
    }
    return i;
}
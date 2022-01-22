#include <iostream>
#include "golf.h"

int main()
{
    const int ArSize = 10;
    golf arr[ArSize];

    int i = 0;
    for (i = 0; i < ArSize; i++)
    {
        if (setgolf(arr[i]))
        {
            break;
        }
    }

    for (int j = 0; j < i; j++)
    {
        showgolf(arr[j]);
    }

    return 0;
}
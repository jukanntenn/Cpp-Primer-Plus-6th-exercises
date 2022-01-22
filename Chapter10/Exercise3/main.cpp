#include <iostream>
#include "golf.h"

int main()
{
    const int ArSize = 10;
    golf arr[ArSize];

    int i = 0;
    for (i = 0; i < ArSize; i++)
    {
        golf g;
        if (g.setgolf())
        {
            break;
        }
        arr[i] = g;
    }

    for (int j = 0; j < i; j++)
    {
        arr[j].showgolf();
    }

    return 0;
}
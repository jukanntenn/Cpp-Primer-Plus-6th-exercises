#include <iostream>
#include "stonewt.h"

int main()
{
    Stonewt stonewts[6] = {1024.0, 1234.5, 8888.8};
    for (int i = 3; i < 6; i++)
    {
        double pounds;
        std::cout << "Enter pounds: " << std::endl;
        std::cin >> pounds;
        stonewts[i] = pounds;
    }

    Stonewt base = 11;
    Stonewt *max = &stonewts[0];
    Stonewt *min = &stonewts[0];
    int gt11 = 0;

    for (int i = 0; i < 6; i++)
    {
        if (stonewts[i] > *max)
        {
            max = &stonewts[i];
        }
        else if (stonewts[i] < *min)
        {
            min = &stonewts[i];
        }

        if (stonewts[i] >= base)
        {
            gt11++;
        }
    }

    std::cout << "Min: ";
    min->show_lbs();

    std::cout << "Max: ";
    max->show_lbs();

    std::cout << gt11 << " element(s) >= 11" << std::endl;

    return 0;
}
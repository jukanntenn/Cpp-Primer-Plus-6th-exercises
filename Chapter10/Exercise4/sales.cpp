#include <iostream>
#include "sales.h"
#include <limits>

namespace SALES
{
    Sales::Sales(const double ar[], int n) {
        max = std::numeric_limits<double>::min();
        min = std::numeric_limits<double>::max();
        double sum = 0;
        for (int i = 0; i < QUARTERS; i++)
        {
            if (i>=n)
            {
                sales[i] = 0;
            } else {
                sales[i] = ar[i];
            }
            sum += sales[i];
            max = max > sales[i] ? max : sales[i];
            min = min < sales[i] ? min : sales[i];
        }
        average = sum / QUARTERS;
    }

    void Sales::setSales()
    {
        double max = std::numeric_limits<double>::min();
        double min = std::numeric_limits<double>::max();
        double sum = 0;
        Sales s;
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sales for qurter #" << i+1 << ": ";
            std::cin >> s.sales[i];
            sum += s.sales[i];
            max = max > s.sales[i] ? max : s.sales[i];
            min = min < s.sales[i] ? min : s.sales[i];
        }
        s.average = sum / QUARTERS;
        s.max = max;
        s.min = min;

        *this = s;
    }

    void Sales::showSales() const
    {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << sales[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average: " << average << std::endl;
        std::cout << "Max: " << max << std::endl;
        std::cout << "Min: " << min << std::endl;
    }
}
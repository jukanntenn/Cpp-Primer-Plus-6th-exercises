#include <iostream>
#include "sales.h"
#include <limits>

namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        double max = std::numeric_limits<double>::min();
        double min = std::numeric_limits<double>::max();
        double sum = 0;
        for (int i = 0; i < QUARTERS; i++)
        {
            if (i >= n)
            {
                s.sales[i] = 0;
            }
            else
            {
                s.sales[i] = ar[i];
            }
            sum += s.sales[i];
            max = max > ar[i] ? max : s.sales[i];
            min = min < ar[i] ? min : s.sales[i];
        }
        s.average = sum / QUARTERS;
        s.max = max;
        s.min = min;
    }
    void setSales(Sales &s)
    {
        double max = std::numeric_limits<double>::min();
        double min = std::numeric_limits<double>::max();
        double sum = 0;
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << "Enter sales for qurter #" << i + 1 << ": ";
            std::cin >> s.sales[i];
            sum += s.sales[i];
            max = max > s.sales[i] ? max : s.sales[i];
            min = min < s.sales[i] ? min : s.sales[i];
        }
        s.average = sum / QUARTERS;
        s.max = max;
        s.min = min;
    }
    void showSales(const Sales &s)
    {
        std::cout << "Sales: ";
        for (int i = 0; i < QUARTERS; i++)
        {
            std::cout << s.sales[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Average: " << s.average << std::endl;
        std::cout << "Max: " << s.max << std::endl;
        std::cout << "Min: " << s.min << std::endl;
    }
}
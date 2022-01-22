#include <iostream>
#include "sales.h"

int main()
{
    using SALES::Sales;
    using SALES::setSales;
    using SALES::showSales;

    Sales s1;
    Sales s2;

    setSales(s1);

    double sales[3] = {1.0, 1.3, 1.2};
    setSales(s2, sales, 3);

    showSales(s1);
    showSales(s2);

    return 0;
}
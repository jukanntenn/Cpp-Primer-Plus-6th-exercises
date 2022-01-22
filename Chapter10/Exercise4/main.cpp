#include <iostream>
#include "sales.h"

int main()
{
    using SALES::Sales;

    Sales s1;

    s1.setSales();

    double sales[3] = {1.0, 1.3, 1.2};
    Sales s2(sales, 3);

    s1.showSales();
    s2.showSales();

    return 0;
}
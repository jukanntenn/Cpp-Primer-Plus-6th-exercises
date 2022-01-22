#include <iostream>
#include "stack.h"

int main()
{
    Stack s;

    customer c1 = {"yxg", 1000};
    customer c2 = {"zrm", 3900};
    customer c3 = {"zs", 4000};
    s.push(c1);
    s.push(c2);
    s.push(c3);

    double running_total = 0;
    customer c;
    while (!s.isempty())
    {
        s.pop(c);
        running_total += c.payment;
        std::cout << "Running total: " << running_total << std::endl;
    }
}
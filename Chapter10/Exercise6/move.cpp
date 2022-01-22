#include <iostream>
#include "move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
};

void Move::showmove() const
{
    std::cout << "x=" << x << " y=" << y << std::endl;
};

Move Move::add(const Move &m) const
{
    double nx = x + m.x;
    double ny = y + m.y;
    return Move(nx, ny);
};

void Move::reset(double a, double b)
{
    x = a;
    y = b;
};
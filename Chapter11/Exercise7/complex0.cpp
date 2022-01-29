#include <iostream>
#include "complex0.h"

complex::complex()
{
    real = 0;
    ima = 0;
}
complex::complex(double r, double i)
{
    real = r;
    ima = i;
}

complex complex::operator+(complex &c) const
{
    return complex(real + c.real, ima + c.ima);
}

complex complex::operator-(complex &c) const
{
    return complex(real - c.real, ima - c.ima);
}

complex complex::operator*(complex &c) const
{
    return complex(real * c.real - ima * c.ima, real * c.ima + ima * c.real);
}

complex complex::operator*(double m) const
{
    return complex(real * m, ima * m);
}

complex complex::operator~() const
{
    return complex(real, -ima);
}

std::istream &operator>>(std::istream &is, complex &c)
{
    using std::cin;
    using std::cout;

    cout << "real: ";
    is >> c.real;
    cout << "imaginary: ";
    is >> c.ima;
    return is;
}

std::ostream &operator<<(std::ostream &os, const complex &c)
{
    os << "(" << c.real << "," << c.ima << "i)";
    return os;
}
#include "cpmv.h"
#include <iostream>
#include <string>

Cpmv::Cpmv()
{
    std::cout << "Default constructor called.\n";
    pi = new Info;
}

Cpmv::Cpmv(std::string q, std::string z)
{
    std::cout << "String constructor called.\n";
    pi = new Info;
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv(const Cpmv &cp)
{
    std::cout << "Copy constructor called.\n";
    pi = new Info;
    *pi = *(cp.pi);
}

Cpmv::Cpmv(Cpmv &&mv)
{
    std::cout << "Move constructor called.\n";
    pi = mv.pi;
    mv.pi = nullptr;
}

Cpmv::~Cpmv()
{
    std::cout << "Destructor called.\n";
    delete pi;
}

Cpmv &Cpmv::operator=(const Cpmv &cp)
{
    std::cout << "Copy assignment operator called.\n";
    if (this == &cp)
    {
        return *this;
    }

    *pi = *(cp.pi);
    return *this;
}
Cpmv &Cpmv::operator=(Cpmv &&mv)
{
    std::cout << "Move assignment operator called.\n";
    if (this == &mv)
    {
        return *this;
    }

    pi = mv.pi;
    mv.pi = nullptr;

    return *this;
}

Cpmv Cpmv::operator+(const Cpmv &obj) const
{
    std::cout << "operator+ called.\n";
    return Cpmv(
        pi->qcode + obj.pi->qcode,
        pi->zcode + obj.pi->zcode);
}

void Cpmv::Display() const
{
    std::cout << "qcode: " << pi->qcode << "\t"
              << "zcode: " << pi->zcode << std::endl;
}
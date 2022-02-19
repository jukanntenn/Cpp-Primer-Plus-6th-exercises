#include <iostream>
#include <cstring>
#include "classic.h"
#include "cd.h"

using std::cout;
using std::endl;

Classic::Classic(char *s1, char *s2, char *pw, int n, double x) : Cd(s1, s2, n, x)
{
    primary_work = new char[strlen(pw) + 1];
    std::strcpy(primary_work, pw);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    primary_work = new char[strlen(c.primary_work) + 1];
    std::strcpy(primary_work, c.primary_work);
}

Classic::Classic()
{
    primary_work = new char[1];
    primary_work[0] = '\0';
}

Classic::~Classic()
{
    delete[] primary_work;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "Primory work: " << primary_work << endl;
}

Classic &Classic::operator=(const Classic &c)
{
    if (this == &c)
    {
        return *this;
    }

    Cd::operator=(c);

    delete[] primary_work;
    primary_work = new char[strlen(c.primary_work) + 1];
    std::strcpy(primary_work, c.primary_work);

    return *this;
}
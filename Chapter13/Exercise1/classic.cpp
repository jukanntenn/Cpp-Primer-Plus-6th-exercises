#include <iostream>
#include <cstring>
#include "classic.h"
#include "cd.h"

using std::cout;
using std::endl;

Classic::Classic(char *s1, char *s2, char *pw, int n, double x) : Cd(s1, s2, n, x)
{
    std::strcpy(primary_work, pw);
}

Classic::Classic(const Classic &c) : Cd(c)
{
    std::strcpy(primary_work, c.primary_work);
}

Classic::Classic()
{
    primary_work[0] = '\0';
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
    std::strcpy(primary_work, c.primary_work);

    return *this;
}
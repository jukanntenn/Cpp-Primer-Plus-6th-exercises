#include <iostream>
#include <cstring>
#include "cd.h"

using std::cout;
using std::endl;

Cd::Cd(char *s1, char *s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    std::strcpy(performers, s1);

    label = new char[strlen(s2) + 1];
    std::strcpy(label, s2);

    selections = n;
    playtime = x;
}

Cd::Cd(const Cd &d)
{
    performers = new char[strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    label = new char[strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';

    label = new char[1];
    label[0] = '\0';

    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    delete[] performers;
    delete[] label;
}

void Cd::Report() const
{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Selections: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
}

Cd &Cd::operator=(const Cd &d)
{
    if (this == &d)
    {
        return *this;
    }

    delete[] performers;
    delete[] label;

    performers = new char[strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    label = new char[strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}
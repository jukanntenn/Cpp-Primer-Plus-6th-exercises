#include <iostream>
#include <cstring>
#include "cow.h"

using std::cout;
using std::endl;

Cow::Cow()
{
    std::strcpy(name, "cow");
    hobby = new char[20];
    std::strcpy(hobby, "singing");
    weight = 100;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
    std::strcpy(name, nm);
    hobby = new char[std::strlen(ho) + 1];
    std::strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow &c)
{
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
}

Cow &Cow::operator=(const Cow &c)
{
    if (this == &c)
    {
        return *this;
    }

    delete[] hobby;
    std::strcpy(name, c.name);
    hobby = new char[std::strlen(c.hobby) + 1];
    std::strcpy(hobby, c.hobby);
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    cout << "Name: " << name << endl;
    cout << "Hobby: " << hobby << endl;
    cout << "Weight: " << weight << endl;
}
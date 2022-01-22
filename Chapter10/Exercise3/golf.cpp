#include <iostream>
#include <cstring>
#include "golf.h"

golf::golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

int golf::setgolf()
{
    using namespace std;

    char fullname[Len];
    int hc;

    cout << "Name: ";
    cin.get(fullname, Len);
    cin.get();
    if (!strlen(fullname))
    {
        return 1;
    }

    cout << "Handicap: ";
    cin >> hc;
    cin.get();

    // cout << fullname << endl;
    // cout << hc;

    golf g(fullname, hc);

    *this = g;
    return 0;
}

void golf::setHandicap(int hc)
{
    handicap = hc;
}

void golf::showgolf() const
{
    using namespace std;
    cout << "Name: " << fullname << endl;
    cout << "Handicap: " << handicap << endl;
}
#include <iostream>
#include <cstring>
#include "golf.h"

void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf &g)
{
    using namespace std;
    cout << "Name: ";
    cin.get(g.fullname, Len);
    cin.get();
    if (!strlen(g.fullname))
    {
        return 1;
    }

    cout << "Handicap: ";
    cin >> g.handicap;
    cin.get();
    return 0;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    using namespace std;
    cout << "Name: " << g.fullname << endl;
    cout << "Handicap: " << g.handicap << endl;
}
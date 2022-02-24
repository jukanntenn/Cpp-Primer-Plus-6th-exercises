#include <iostream>
#include "winec.h"

using std::cin;
using std::cout;
using std::endl;

Wine::Wine() : name("none"), yb(ArrayInt(0), ArrayInt(0)), years(0)
{
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : name(l), yb(ArrayInt(yr, y), ArrayInt(bot, y)), years(y)
{
}

Wine::Wine(const char *l, int y) : name(l), years(y), yb(ArrayInt(y), ArrayInt(y)) {}

std::string &Wine::Label()
{
    return name;
}

void Wine::GetBottles()
{

    cout << "Enter " << name << "data for " << years << " year(s): \n";
    int y;
    int b;
    for (int i = 0; i < years; i++)
    {
        cout << "Enter year: ";
        cin >> y;
        yb.first()[i] = y;

        cout << "Enter bottles for that year: ";
        cin >> b;
        yb.second()[i] = b;
    }
}

int Wine::sum() const
{
    return yb.second().sum();
}

void Wine::Show() const
{
    cout << "Wine: " << name << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; i++)
    {
        cout << "\t" << yb.first()[i] << "\t" << yb.second()[i] << endl;
    }
}
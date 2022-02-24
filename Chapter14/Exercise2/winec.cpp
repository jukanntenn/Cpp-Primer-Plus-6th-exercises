#include <iostream>
#include <string>
#include "winec.h"

using std::cin;
using std::cout;
using std::endl;

Wine::Wine() : std::string("Null Wine"), PairArray(ArrayInt(0), ArrayInt(0)), years(0)
{
}

Wine::Wine(const char *l, int y, const int yr[], const int bot[]) : std::string(l), PairArray(ArrayInt(yr, y), ArrayInt(bot, y)), years(y)
{
}

Wine::Wine(const char *l, int y) : std::string(l), years(y), PairArray(ArrayInt(y), ArrayInt(y)) {}

const std::string &Wine::Label() const
{
    return (const std::string &)*this;
}

void Wine::GetBottles()
{

    cout << "Enter " << Label() << "data for " << years << " year(s): \n";
    int y;
    int b;
    for (int i = 0; i < years; i++)
    {
        cout << "Enter year: ";
        cin >> y;
        PairArray::first()[i] = y;

        cout << "Enter bottles for that year: ";
        cin >> b;
        PairArray::second()[i] = b;
    }
}

int Wine::sum() const
{
    return PairArray::second().sum();
}

void Wine::Show() const
{
    cout << "Wine: " << Label() << endl;
    cout << "\tYear\tBottles\n";
    for (int i = 0; i < years; i++)
    {
        cout << "\t" << PairArray::first()[i] << "\t" << PairArray::second()[i] << endl;
    }
}
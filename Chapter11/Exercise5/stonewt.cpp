// stonewt.cpp -- Stonewt methods
#include <iostream>
using std::cout;
#include "stonewt.h"

// construct Stonewt object from double value
Stonewt::Stonewt(double lbs)
{
    stone = int(lbs) / Lbs_per_stn; // integer division
    pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
    pounds = lbs;
    form = STONE;
}

// construct Stonewt object from stone, double values
Stonewt::Stonewt(int stn, double lbs)
{
    stone = stn;
    pds_left = lbs;
    pounds = stn * Lbs_per_stn + lbs;
    form = STONE;
}

Stonewt::Stonewt() // default constructor, wt = 0
{
    stone = pounds = pds_left = 0;
    form = STONE;
}

Stonewt::~Stonewt() // destructor
{
}

Stonewt Stonewt::operator+(Stonewt &s)
{
    double lbs = pounds + s.pounds;
    return Stonewt(lbs);
}

Stonewt Stonewt::operator-(Stonewt &s)
{
    double lbs = pounds - s.pounds;
    return Stonewt(lbs);
}

Stonewt Stonewt::operator*(double m)
{
    double lbs = pounds * m;
    return Stonewt(lbs);
}

// show weight in stones
std::ostream &operator<<(std::ostream &os, Stonewt &s)
{
    if (s.form == Stonewt::STONE)
    {
        cout << s.stone << " stone, " << s.pds_left << " pounds\n";
    }
    else if (s.form == Stonewt::FPOUNDS)
    {
        cout << s.pounds << " pounds\n";
    }
    else
    {
        cout << int(s.pounds) << " pounds\n";
    }
    return os;
}
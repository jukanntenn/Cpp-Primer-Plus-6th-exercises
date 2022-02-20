#include "dma.h"
#include <cstring>

// AbsDMA methods
absDMA::absDMA(const char *l, int r)
{
    label = new char[std::strlen(l) + 1];
    std::strcpy(label, l);
    rating = r;
}

absDMA::absDMA(const absDMA &as)
{
    label = new char[std::strlen(as.label) + 1];
    std::strcpy(label, as.label);
    rating = as.rating;
}

absDMA::~absDMA()
{
    delete[] label;
}

void absDMA::View() const
{
    std::cout << "Label: " << label << std::endl;
    std::cout << "Rating: " << rating << std::endl;
}

absDMA &absDMA::operator=(const absDMA &as)
{
    if (this == &as)
        return *this;
    delete[] label;
    label = new char[std::strlen(as.label) + 1];
    std::strcpy(label, as.label);
    rating = as.rating;
    return *this;
}

// baseDMA methods
baseDMA::baseDMA(const char *l, int r) : absDMA(l, r)
{
}

baseDMA::baseDMA(const baseDMA &rs) : absDMA(rs)
{
}

baseDMA::~baseDMA()
{
}

void baseDMA::View() const
{
    absDMA::View();
}

baseDMA &baseDMA::operator=(const baseDMA &rs)
{
    if (this == &rs)
        return *this;
    absDMA::operator=(rs);
    return *this;
}

// lacksDMA methods
lacksDMA::lacksDMA(const char *c, const char *l, int r)
    : absDMA(l, r)
{
    std::strncpy(color, c, 39);
    color[39] = '\0';
}

lacksDMA::lacksDMA(const char *c, const absDMA &as)
    : absDMA(as)
{
    std::strncpy(color, c, COL_LEN - 1);
    color[COL_LEN - 1] = '\0';
}

void lacksDMA::View() const
{
    absDMA::View();
    std::cout << "Color: " << color << std::endl;
}

// hasDMA methods
hasDMA::hasDMA(const char *s, const char *l, int r)
    : absDMA(l, r)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char *s, const absDMA &as)
    : absDMA(as)
{
    style = new char[std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA &hs)
    : absDMA(hs) // invoke base class copy constructor
{
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA &hasDMA::operator=(const hasDMA &hs)
{
    if (this == &hs)
        return *this;
    absDMA::operator=(hs); // copy base portion
    delete[] style;        // prepare for new style
    style = new char[std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    return *this;
}

void hasDMA::View() const
{
    absDMA::View();
    std::cout << "Style: " << style << std::endl;
}

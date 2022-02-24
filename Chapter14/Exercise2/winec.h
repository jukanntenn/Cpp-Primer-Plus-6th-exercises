#ifndef WINEC_H_
#define WINEC_H_

#include <string>
#include <valarray>
#include "pair.h"

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
private:
    int years;

public:
    Wine(const char *l, int y, const int yr[], const int bot[]);
    Wine(const char *l, int y);
    Wine();
    const std::string &Label() const;
    void GetBottles();
    int sum() const;
    void Show() const;
};

#endif
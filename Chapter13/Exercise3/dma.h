#ifndef DMA_H_
#define DMA_H_
#include <iostream>

class absDMA
{
private:
    char *label;
    int rating;

public:
    absDMA(const char *l = "null", int r = 0);
    absDMA(const absDMA &ad);
    virtual ~absDMA();
    virtual void View() const = 0;
    absDMA &operator=(const absDMA &ad);
};

//  Base Class Using DMA
class baseDMA : public absDMA
{
public:
    baseDMA(const char *l = "null", int r = 0);
    baseDMA(const baseDMA &rs);
    virtual ~baseDMA();
    virtual void View() const;
    baseDMA &operator=(const baseDMA &rs);
};

// derived class without DMA
// no destructor needed
// uses implicit copy constructor
// uses implicit assignment operator
class lacksDMA : public absDMA
{
private:
    enum
    {
        COL_LEN = 40
    };
    char color[COL_LEN];

public:
    lacksDMA(const char *c = "blank", const char *l = "null",
             int r = 0);
    lacksDMA(const char *c, const absDMA &ad);
    virtual void View() const;
};

// derived class with DMA
class hasDMA : public absDMA
{
private:
    char *style;

public:
    hasDMA(const char *s = "none", const char *l = "null",
           int r = 0);
    hasDMA(const char *s, const absDMA &ad);
    hasDMA(const hasDMA &hs);
    ~hasDMA();
    hasDMA &operator=(const hasDMA &rs);
    virtual void View() const;
};

#endif
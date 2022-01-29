#ifndef COMPLEX0_H_
#define COMPLEX0_H_

class complex
{
private:
    double real;
    double ima;

public:
    complex();
    complex(double r, double i);
    complex operator+(complex &c) const;
    complex operator-(complex &c) const;
    complex operator*(complex &c) const;
    complex operator*(double m) const;
    complex operator~() const;
    friend complex operator*(double m, const complex &c)
    {
        return c * m;
    };
    friend std::istream &operator>>(std::istream &is, complex &c);
    friend std::ostream &operator<<(std::ostream &os, const complex &c);
};

#endif
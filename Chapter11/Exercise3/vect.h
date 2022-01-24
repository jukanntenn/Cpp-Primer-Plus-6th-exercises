// vect.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode
        {
            RECT,
            POL
        };
        // RECT for rectangular, POL for Polar modes
    private:
        double x;  // horizontal value
        double y;  // vertical value
        Mode mode; // RECT or POL
                   // private methods for setting values
        void set_x(double mag, double ang);
        void set_y(double mag, double ang);

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const { return x; }                     // report x value
        double yval() const { return y; }                     // report y value
        double magval() const { return sqrt(x * x + y * y); } // report magnitude
        double angval() const;                                // report angle
        void polar_mode();                                    // set mode to POL
        void rect_mode();                                     // set mode to RECT
                                                              // operator overloading
        Vector operator+(const Vector &b) const;
        Vector operator-(const Vector &b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
        // friends
        friend Vector operator*(double n, const Vector &a);
        friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    };

} // end namespace VECTOR
#endif
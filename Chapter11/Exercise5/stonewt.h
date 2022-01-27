// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
class Stonewt
{
private:
    enum
    {
        Lbs_per_stn = 14
    }; // pounds per stone
    enum FORM
    {
        STONE,
        IPOUNDS,
        FPOUNDS
    };
    FORM form;
    int stone;       // whole stones
    double pds_left; // fractional pounds
    double pounds;   // entire weight in pounds
public:
    Stonewt(double lbs);          // constructor for double pounds
    Stonewt(int stn, double lbs); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    void stone_form() { form = STONE; };
    void ipounds_form() { form = IPOUNDS; };
    void fpounds_form() { form = FPOUNDS; };
    Stonewt operator+(Stonewt &s);
    Stonewt operator-(Stonewt &s);
    Stonewt operator*(double m);
    friend Stonewt operator*(double m, Stonewt &s) { return s * m; };
    friend std::ostream &operator<<(std::ostream &os, Stonewt &s);
};
#endif
#include <iostream>
#include <stdexcept>

class bad_mean : public std::logic_error
{
protected:
    double v1;
    double v2;

public:
    bad_mean(double a, double b, const std::string &what_arg) : v1(a), v2(b), std::logic_error(what_arg) {}
    virtual void mesg() = 0;
};

class bad_hmean : public bad_mean
{
public:
    explicit bad_hmean(double a, double b, const std::string &what_arg) : bad_mean(a, b, what_arg) {}
    void mesg();
};

inline void bad_hmean::mesg()
{
    std::cout << "hmean(" << v1 << ", " << v2 << "): "
              << "invalid arguments: a = -b\n";
}

class bad_gmean : public bad_mean
{
public:
    explicit bad_gmean(double a, double b, const std::string &what_arg) : bad_mean(a, b, what_arg) {}
    void mesg();
};

inline void bad_gmean::mesg()
{
    std::cout << "gmean(" << v1 << ", " << v2 << "): "
              << "invalid: arguments should be >= 0\n";
}
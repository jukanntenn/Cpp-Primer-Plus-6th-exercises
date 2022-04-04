#include <iostream>
#include <initializer_list>

template <typename T>
T average_list(std::initializer_list<T> il);

int main()
{
    using namespace std;
    // list of double deduced from list contents
    auto q = average_list({15.4, 10.7, 9.0});

    cout << q << endl;

    // list of int deduced from list contents
    cout << average_list({20, 30, 19, 17, 45, 38}) << endl;

    // forced list of double
    auto ad = average_list<double>({'A', 70, 65.33});

    cout << ad << endl;
    return 0;
}

template <typename T>
T average_list(std::initializer_list<T> il)
{
    T total = 0;
    size_t n = 0;
    for (auto p = il.begin(); p != il.end(); p++, n++)
    {
        total += *p;
    }
    return total / n;
}
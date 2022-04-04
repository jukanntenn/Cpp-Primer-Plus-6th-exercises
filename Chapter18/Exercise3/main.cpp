#include <iostream>

long double sum_values();

template <typename T>
long double sum_values(T value);

template <typename T, typename... Args>
long double sum_values(T value, Args... args);

int main()
{
    auto sum = sum_values(10, 99.1, 24.11, 44, 19, 2);
    std::cout << "sum of {10, 99.1, 24.11, 44, 19, 2} is: " << sum << std::endl;

    std::cout << "sum of empty: " << sum_values() << std::endl;
    return 0;
}

long double sum_values()
{
    return 0;
}

template <typename T>
long double sum_values(T value)
{
    return value;
}

template <typename T, typename... Args>
long double sum_values(T value, Args... args)
{
    return value + sum_values(args...);
}
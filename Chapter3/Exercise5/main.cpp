#include <iostream>

int main()
{
    using namespace std;

    long long world_population;
    long long us_population;

    cout << "Enter the world's population: ";
    cin >> world_population;
    cout << "Enter the population of the US: ";
    cin >> us_population;
    double p = double(us_population) / world_population * 100;
    cout << "The population of the US is " << p << "% of the world population." << endl;
}
// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime>   // time() prototype
#include "vect.h"
#include <limits>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0)); // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    int trials;
    double target;
    double dstep;
    cout << "Enter trial times (q to quit): ";
    while (cin >> trials)
    {
        if (trials < 1)
        {
            cout << "At least one trial!" << endl;
            cout << "Enter trial times (q to quit): ";
            continue;
        }

        cout << "Enter target distance: ";
        if (!(cin >> target))
            break;

        cout << "Enter step length: ";
        if (!(cin >> dstep))
            break;

        long total_steps = 0;
        long highest_steps = 0;
        long lowest_steps = std::numeric_limits<long long int>::max();
        long n = trials;
        while (n > 0)
        {
            while (result.magval() < target)
            {
                direction = rand() % 360;
                step.reset(dstep, direction, Vector::POL);
                result = result + step;
                steps++;
            }

            total_steps += steps;
            if (steps > highest_steps)
            {
                highest_steps = steps;
            }
            if (steps < lowest_steps)
            {
                lowest_steps = steps;
            }
            steps = 0;
            result.reset(0.0, 0.0);
            n--;
        }

        cout << "Highest steps: " << highest_steps << endl;
        cout << "Lowest steps: " << lowest_steps << endl;
        cout << "Avarage steps: " << (double(total_steps) / trials) << endl;

        cout << "Enter trial times (q to quit): ";
    }

    cout << "Bye!\n";
    cin.clear();
    while (cin.get() != '\n')
        continue;
    return 0;
}
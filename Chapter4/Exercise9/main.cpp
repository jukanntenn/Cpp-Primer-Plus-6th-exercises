#include <iostream>

using namespace std;

struct CandyBar
{
    /* data */
    string brand_name;
    double weight;
    int calories;
};

int main()
{
    CandyBar *bars = new CandyBar[3];
    bars[0].brand_name = "Mocha Munch";
    bars[0].weight = 3.1;
    bars[0].calories = 4;

    bars[1].brand_name = "Nocha Nunch";
    bars[1].weight = 3.11;
    bars[1].calories = 4;

    bars[2].brand_name = "Pocha Punch";
    bars[2].weight = 2.1;
    bars[2].calories = 7;

    cout << "Brand Name: " << bars[0].brand_name << endl;
    cout << "Weight: " << bars[0].weight << endl;
    cout << "Calories: " << bars[0].calories << endl;
    cout << endl;

    cout << "Brand Name: " << bars[1].brand_name << endl;
    cout << "Weight: " << bars[1].weight << endl;
    cout << "Calories: " << bars[1].calories << endl;
    cout << endl;

    cout << "Brand Name: " << bars[2].brand_name << endl;
    cout << "Weight: " << bars[2].weight << endl;
    cout << "Calories: " << bars[2].calories << endl;
    cout << endl;

    delete[] bars;

    return 0;
}
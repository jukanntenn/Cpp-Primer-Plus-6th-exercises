#include <iostream>
#include <string>

struct CandyBar
{
    /* data */
    char brand_name[20];
    double weight;
    int calories;
};

int main()
{
    using namespace std;
    CandyBar bars[3] = {
        {"Mocha Munch", 2.3, 350},
        {"Nocha Nunch", 1.2, 420},
        {"Pocha Punch", 4.1, 356},
    };

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
}
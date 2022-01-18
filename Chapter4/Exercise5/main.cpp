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
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "Brand Name: " << snack.brand_name << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calories: " << snack.calories << endl;
}
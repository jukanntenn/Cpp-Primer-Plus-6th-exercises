#include <iostream>

using namespace std;

struct CandyBar
{
    char *brand_name;
    double weight;
    int calories;
};

CandyBar &create(CandyBar &cb, char *brand_name = "Millennium Munch", double weight = 2.85, int calories = 350);
void display(const CandyBar &);

int main()
{
    CandyBar cb, cb2;
    create(cb);
    display(cb);

    create(cb2, "Elon Musk", 3.12, 555);
    display(cb2);
    return 0;
}

CandyBar &create(CandyBar &cb, char *brand_name, double weight, int calories)
{
    cb.brand_name = brand_name;
    cb.weight = weight;
    cb.calories = calories;
    return cb;
}

void display(const CandyBar &cb)
{
    cout << "Brand name: " << cb.brand_name << endl;
    cout << "Weight: " << cb.weight << endl;
    cout << "Calories: " << cb.calories << endl;
}
#include <iostream>
#include "cow.h"

void show_cow(const Cow c);

int main()
{

    using std::cout;
    using std::endl;

    Cow c0;
    cout << "c0: " << endl;
    c0.ShowCow();

    Cow c1 = Cow("Bob", "coding", 110);
    cout << "c1: " << endl;
    c1.ShowCow();

    c0 = c1;
    cout << "c0: " << endl;
    c0.ShowCow();

    Cow c2 = Cow(c1);
    cout << "Show cow: " << endl;
    show_cow(c2);

    cout << "c2: " << endl;
    c2.ShowCow();
    return 0;
}

void show_cow(const Cow c)
{
    c.ShowCow();
}
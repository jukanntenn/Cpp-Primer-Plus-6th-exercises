
#include <iostream>
#include "list.h"

void show(Item &item);

void show(Item &item)
{
    using namespace std;
    cout << item << endl;
}

int main()
{
    using namespace std;
    List lst;

    for (int i = 0; i < 10; i++)
    {
        lst.add(i);
    }

    lst.visit(&show);
}
#include <iostream>

using namespace std;

void function1();
void function2();

int main()
{
    function1();
    function1();
    function2();
    function2();
}

void function1()
{
    cout << "Three blind mice" << endl;
}

void function2()
{
    cout << "See how they run" << endl;
}
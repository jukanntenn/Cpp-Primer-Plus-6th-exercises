#include <iostream>

int main()
{
    using namespace std;

    double daphne_balance = 100.0;
    double cleo_balance = 100.0;
    int year = 0;

    while (cleo_balance <= daphne_balance)
    {
        daphne_balance += 10;
        cleo_balance *= 1.05;
        year++;
    }

    cout << year << " years it takes for the value of Cleo’s investment to exceed the value of Daphne’s investment.\n";
    cout << "Daphne's balance: " << daphne_balance << "$" << endl;
    cout << "Cleo's balance: " << cleo_balance << "$" << endl;
}
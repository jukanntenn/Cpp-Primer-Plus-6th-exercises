#include <iostream>
#include <cstring>
#include "personmi.h"
const int SIZE = 5;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;

    Person *people[SIZE];

    int ct;
    for (ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the person category:\n"
             << "g: gunslinger  p: poker player  "
             << "b: bad dude  q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch (choice)
        {
        case 'g':
            people[ct] = new Gunslinger;
            break;
        case 'p':
            people[ct] = new PokerPlayer;
            break;
        case 'b':
            people[ct] = new BadDude;
            break;
        }
        cin.get();
        people[ct]->Set();
    }

    cout << "\nHere are people:\n";
    int i;
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        people[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete people[i];
    cout << "Bye.\n";
    // cin.get();
    // cin.get();
    return 0;
}
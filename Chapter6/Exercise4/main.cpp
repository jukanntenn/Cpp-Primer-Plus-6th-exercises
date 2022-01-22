#include <iostream>

using namespace std;

const int strsize = 20;
struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    bop programmers[5] = {
        {"Wimp Macho", "Junior Programmer", "BTC", 0},
        {"Raki Rhodes", "Junior Programmer", "ETH", 1},
        {"Celia Laiter", "Analyst Trainee", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "USDT", 1},
        {"Pat Hand", "Analyst Trainee", "LOOPY", 2},
    };

    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name        b. display by title\n"
            "c. display by bopname     d. display by preference\n"
            "q. quit\n";
    cout << "Enter your choice: ";
    char choice;
    cin >> choice;
    while (choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            for (int i = 0; i < 5; i++)
            {
                cout << programmers[i].fullname << endl;
            }
            break;
        case 'b':
            for (int i = 0; i < 5; i++)
            {
                cout << programmers[i].title << endl;
            }
            break;
        case 'c':
            for (int i = 0; i < 5; i++)
            {
                cout << programmers[i].bopname << endl;
            }
            break;
        case 'd':
            for (int i = 0; i < 5; i++)
            {
                switch (programmers[i].preference)
                {
                case 0:
                    cout << programmers[i].fullname << endl;
                    break;
                case 1:
                    cout << programmers[i].title << endl;
                    break;
                case 2:
                    cout << programmers[i].bopname << endl;
                    break;
                default:
                    break;
                };
            }
            break;
        default:
            break;
        };
        cout << "Next choice: ";
        cin >> choice;
    }
    cout << "Bye!\n";
    return 0;
}
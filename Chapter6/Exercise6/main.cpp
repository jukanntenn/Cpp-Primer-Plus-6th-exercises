#include <iostream>
#include <string>

using namespace std;

struct donor
{
    string name;
    double amt;
};

int main()
{
    int num_donors;

    cout << "Enter number of contributors: ";
    cin >> num_donors;
    cin.get();

    donor *donors = new donor[num_donors];

    for (int i = 0; i < num_donors; i++)
    {
        donor d;
        cout << "Enter contributor's name: ";
        getline(cin, d.name);
        cout << "Enter amount of the contribution: ";
        cin >> d.amt;
        cin.get();
        donors[i] = d;
    }

    cout << "Grand Patrons\n";
    int num_grand_patrons = 0;
    for (int i = 0; i < num_donors; i++)
    {
        if (donors[i].amt >= 10000)
        {
            cout << donors[i].name << " " << donors[i].amt << endl;
            num_grand_patrons++;
        }
    }
    if (num_grand_patrons == 0)
    {
        cout << "none\n";
    }

    cout << "Patrons\n";
    int num_patrons = 0;
    for (int i = 0; i < num_donors; i++)
    {
        if (donors[i].amt < 10000)
        {
            cout << donors[i].name << " " << donors[i].amt << endl;
            num_patrons++;
        }
    }
    if (num_patrons == 0)
    {
        cout << "none\n";
    }
    delete[] donors;
    return 0;
}
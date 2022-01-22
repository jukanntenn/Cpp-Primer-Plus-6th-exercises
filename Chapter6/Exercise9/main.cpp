#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

struct donor
{
    string name;
    double amt;
};

int main()
{
    ifstream inFile;
    inFile.open("test.txt");
    if (!inFile.is_open())
    {
        cout << "Could not open the file\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    int num_donors;
    inFile >> num_donors;
    inFile.get();

    donor *donors = new donor[num_donors];
    for (int i = 0; i < num_donors; i++)
    {
        donor d;
        getline(inFile, d.name);
        inFile >> d.amt;
        inFile.get();
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
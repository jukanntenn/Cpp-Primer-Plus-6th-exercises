#include <iostream>
#include <string>

using namespace std;

struct car
{
    string make;
    int year;
};

int main()
{
    int num;
    cout << "How many cars do you wish to catalog? ";
    cin >> num;
    cin.get();

    car *catalog = new car[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Car #" << i + 1 << ":\n";
        cout << "Please enter the make: ";
        getline(cin, catalog[i].make);
        cout << "Please enter the year make: ";
        cin >> catalog[i].year;
        cin.get();
    }

    cout << "Here is your collection:\n";
    for (int i = 0; i < num; i++)
    {
        cout << catalog[i].year << " " << catalog[i].make << endl;
    }

    return 0;
}
#include <iostream>

using namespace std;

struct pizza
{
    /* data */
    string company_name;
    double diameter;
    double weight;
};

int main()
{
    pizza p;
    cout << "Please enter the company name: ";
    getline(cin, p.company_name);

    cout << "Please enter the diameter: ";
    cin >> p.diameter;

    cout << "Please enter the weight: ";
    cin >> p.weight;

    cout << "Pizza information: \n";
    cout << "Company name: " << p.company_name << endl;
    cout << "Diameter: " << p.diameter << endl;
    cout << "Weight: " << p.weight << endl;
}
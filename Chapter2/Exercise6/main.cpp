#include <iostream>

double ly2au(double light_year);

int main()
{
    using namespace std;
    double light_year;

    cout << "Enter the number of light years: ";
    cin >> light_year;

    double au = ly2au(light_year);
    cout << light_year << " light years = " << au << " astronomical units." << endl;
    return 0;
}

double ly2au(double light_year)
{
    return light_year * 63240;
}
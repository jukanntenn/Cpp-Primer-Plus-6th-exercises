#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    const int factor1 = 12;
    const float factor2 = 0.0254;
    const float factor3 = 2.2;

    int feet;
    int inches;
    int height_in_inches;
    double weight_in_pounds;

    cout << "Enter your height feet: ";
    cin >> feet;
    cout << "Enter your height inches: ";
    cin >> inches;
    cout << "Enter your weight in pounds: ";
    cin >> weight_in_pounds;

    height_in_inches = feet * factor1 + inches;
    double height_in_meters = height_in_inches * factor2;
    double mass_in_kilograms = weight_in_pounds / factor3;

    double bmi = mass_in_kilograms / sqrt(height_in_meters);
    cout << "Your BMI is " << bmi << endl;
}
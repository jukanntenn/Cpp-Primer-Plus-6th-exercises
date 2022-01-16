#include <iostream>

int main()
{
    using namespace std;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    int age_in_month = age * 12;
    cout << "Your age in months is " << age_in_month << "." << endl;
}
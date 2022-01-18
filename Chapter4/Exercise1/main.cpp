#include <iostream>

int main()
{
    using namespace std;

    char first_name[20];
    cout << "What is your first name? ";
    cin.getline(first_name, 20);

    char last_name[20];
    cout << "What is your last name? ";
    cin >> last_name;

    char grade;
    cout << "What letter grade do you deserve? ";
    cin >> grade;

    int age;
    cout << "What is your age? ";
    cin >> age;

    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
}
#include <iostream>
#include <cstring>

int main()
{
    using namespace std;
    char first_name[20];
    char last_name[20];
    char full_name[40];

    cout << "Enter your first name: \n";
    cin.getline(first_name, 20);
    cout << "Enter your last name: \n";
    cin.getline(last_name, 20);
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    cout << "Here's the information in a single string: " << full_name << endl;
}
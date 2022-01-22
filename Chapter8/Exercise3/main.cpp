#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string &toupper_string(string &);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while (str != "q")
    {
        toupper_string(str);
        cout << str << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }
    cout << "Bye!\n";
    return 0;
}

string &toupper_string(string &str)
{
    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return str;
}
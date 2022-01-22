#include <iostream>
#include <cctype>

int main()
{
    using namespace std;

    char ch;
    cout << "Enter text, and type @ to terminate input.\n";
    cin.get(ch);
    while (ch != '@')
    {
        if (isdigit(ch))
        {
        }
        else if (islower(ch))
        {
            ch = toupper(ch);
            cout << ch;
        }
        else if (isupper(ch))
        {
            ch = tolower(ch);
            cout << ch;
        }
        else
        {
            cout << ch;
        }
        cin.get(ch);
    }
    cout << endl;
}
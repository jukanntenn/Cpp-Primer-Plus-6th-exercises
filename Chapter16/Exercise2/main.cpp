#include <iostream>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::isalnum;
using std::string;
using std::tolower;

bool is_palindrome(std::string &);

int main()
{
    cout << "Enter the string: \n";
    string s;
    getline(cin, s);
    if (is_palindrome(s))
    {
        cout << s << " is a palindrome.\n";
    }
    else
    {
        cout << s << " is not a palindrome.\n";
    }

    return 0;
}

bool is_palindrome(std::string &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (!isalnum(s[i]))
        {
            i++;
            continue;
        }
        if (!isalnum(s[j]))
        {
            j--;
            continue;
        }
        if (tolower(s[i++]) != tolower(s[j--]))
        {
            return false;
        }
    }
    return true;
}
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

bool is_palindrome(std::string &);

int main()
{
    cout << "Enter the string: \n";
    string s;
    cin >> s;
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
        if (s[i++] != s[j--])
        {
            return false;
        }
    }
    return true;
}
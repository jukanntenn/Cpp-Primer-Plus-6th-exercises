#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int cnt = 0;
    char ch;
    cout << "Enter the characters: \n";
    while ((ch = cin.get()) != '$' && ch != '\n')
    {
        cnt++;
    }
    cout << cnt << " characters.\n";
    if (ch == '$')
    {
        cin.putback(ch);
        cout << "The next character is: " << (char)cin.peek() << endl;
    }
    return 0;
}
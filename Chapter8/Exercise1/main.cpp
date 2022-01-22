#include <iostream>

using namespace std;

void print_string(char[], int);

int main()
{
    char str[100];
    int times = 0;
    cout << "Enter string:\n";
    cin.get(str, 100);
    cout << "Enter times:\n";
    cin.get();
    cin >> times;

    print_string(str, times);
}

void print_string(char str[], int times)
{
    cout << str << endl;
    if (times == 0)
    {
        return;
    }
    print_string(str, times - 1);
}
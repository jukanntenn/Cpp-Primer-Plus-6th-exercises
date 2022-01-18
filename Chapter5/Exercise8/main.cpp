#include <iostream>
#include <cstring>

int main()
{
    using namespace std;

    int cnt = 0;
    char word[20];
    cout << "Enter words (to stop, type the word done): \n";

    cin >> word;
    while (strcmp(word, "done"))
    {
        cnt++;
        cin >> word;
    }
    cout << "You entered a total of " << cnt << " words.\n";

    return 0;
}
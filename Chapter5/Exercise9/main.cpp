#include <iostream>
#include <string>

int main()
{
    using namespace std;

    int cnt = 0;
    string word;
    cout << "Enter words (to stop, type the word done): \n";

    cin >> word;
    while (word != "done")
    {
        cnt++;
        cin >> word;
    }
    cout << "You entered a total of " << cnt << " words.\n";

    return 0;
}
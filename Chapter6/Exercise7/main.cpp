#include <iostream>
#include <cctype>
#include <cstring>

int main()
{
    using namespace std;

    cout << "Enter words (q to quit):\n";
    char word[20];
    int vowels = 0;
    int consonants = 0;
    int others = 0;

    cin >> word;
    while (strlen(word) != 1 || word[0] != 'q')
    {
        if (isalpha(word[0]))
        {
            if (word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
        else
        {
            others++;
        }
        cin >> word;
    }

    cout << vowels << " words beginning with vowels\n";
    cout << consonants << " words beginning with consonants\n";
    cout << others << " others\n";
    return 0;
}
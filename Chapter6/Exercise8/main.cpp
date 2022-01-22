#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
    using namespace std;

    ifstream inFile;
    char ch;
    int cnt = 0;
    inFile.open("test.txt");
    if (!inFile.is_open())
    {
        cout << "Could not open the file\n";
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }

    inFile.get(ch);
    while (inFile.good())
    {
        inFile.get(ch);
        cnt++;
    }

    if (inFile.eof())
        cout << "End of file reached.\n";
    else if (inFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";

    cout << cnt << " characters in file.\n";
    inFile.close();

    return 0;
}
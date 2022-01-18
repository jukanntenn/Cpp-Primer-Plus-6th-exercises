#include <iostream>

int main()
{
    using namespace std;

    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ".";
        }
        for (int k = i; k < rows; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
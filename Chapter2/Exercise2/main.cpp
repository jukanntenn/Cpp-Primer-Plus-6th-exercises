#include <iostream>

int main()
{
    using namespace std;

    double furlongs;
    cout << "Enter the furlongs: ";
    cin >> furlongs;

    double yards = furlongs * 220;
    cout << furlongs << " furlongs = " << yards << " yards" << endl;
}
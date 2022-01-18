#include <iostream>

int main()
{

    using namespace std;

    int times = 0;
    double total = 0;
    double tmp;

    cout << "Enter 40-yd dash: ";
    cin >> tmp;
    cin.get();
    times += 1;
    total += tmp;

    cout << "Enter 40-yd dash: ";
    cin >> tmp;
    cin.get();
    times += 1;
    total += tmp;

    cout << "Enter 40-yd dash: ";
    cin >> tmp;
    cin.get();
    times += 1;
    total += tmp;

    double avg = total / times;
    cout << "Avarage: " << avg << endl;
}
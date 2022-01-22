#include <iostream>

using namespace std;

int Fill_array(double arr[], int size);
void Show_array(double arr[], int size);
void Reverse_array(double arr[], int size);

int main()
{
    const int ArSize = 100;
    double values[ArSize];
    int n = Fill_array(values, ArSize);
    Show_array(values, n);
    Reverse_array(values, n);
    Show_array(values, n);
    Reverse_array(values + 1, n - 2);
    Show_array(values, n);
    return 0;
}

int Fill_array(double arr[], int size)
{
    int num = 0;
    double temp;
    cout << "Enter value #" << num + 1 << ": ";
    while (cin >> temp)
    {
        arr[num] = temp;
        num++;
        cout << "Enter value #" << num + 1 << ": ";
    }
    return num;
}

void Show_array(double arr[], int size)
{
    cout << "Array: \n";
    for (int i = 0; i < size; i++)
    {
        cout << i << ": " << arr[i] << endl;
    }
    cout << endl;
}

void Reverse_array(double arr[], int size)
{
    double temp;
    for (int i = 0, j = size - 1; i < j; i++, j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}
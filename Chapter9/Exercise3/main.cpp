#include <iostream>
#include <cstring>

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    const int BUF = 512;
    char *buffer = new char[BUF];

    chaff *arr = new (buffer) chaff[2];
    strcpy(arr[0].dross, "test1");
    arr[0].slag = 1;

    strcpy(arr[1].dross, "test2");
    arr[1].slag = 2;

    for (int i = 0; i < 2; i++)
    {
        std::cout << arr[i].dross << std::endl;
        std::cout << arr[i].slag << std::endl;
    }

    delete[] arr;
    return 0;
}
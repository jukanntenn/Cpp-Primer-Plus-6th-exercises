#include <iostream>
#include <string>
#include "dma.h"

const int NUM_DMA = 4;

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    absDMA *p_dmas[NUM_DMA];
    char templable[40];
    int temprating;
    char kind;

    for (int i = 0; i < NUM_DMA; i++)
    {
        cout << "Enter label: ";
        cin >> templable;

        cout << "Enter rating: ";
        cin >> temprating;

        cout << "Enter 1 for baseDMA or "
             << "2 for lacksDMA or "
             << "3 for hasDMA: ";

        while (cin >> kind && (kind != '1' && kind != '2' && kind != '3'))
            cout << "Enter 1 or 2 or 3: ";

        if (kind == '1')
            p_dmas[i] = new baseDMA(templable, temprating);
        else if (kind == '2')
        {
            char tempcolor[40];
            cout << "Enter color: ";
            cin >> tempcolor;
            p_dmas[i] = new lacksDMA(tempcolor, templable, temprating);
        }
        else
        {
            char tempstyle[40];
            cout << "Enter style: ";
            cin >> tempstyle;
            p_dmas[i] = new lacksDMA(tempstyle, templable, temprating);
        }

        while (cin.get() != '\n')
            continue;
    }
    cout << endl;
    for (int i = 0; i < NUM_DMA; i++)
    {
        p_dmas[i]->View();
        cout << endl;
    }

    for (int i = 0; i < NUM_DMA; i++)
    {
        delete p_dmas[i];
    }

    cout << "Done.\n";
    return 0;
}
#include <iostream>
#include <fstream>
#include "emp.h"

void show_menu();
int main()
{
    const int MAX = 4;
    abstr_emp *pc[MAX];

    std::ifstream fin("employees.txt");
    if (!fin.is_open())
    {
        std::ofstream fout("employees.txt");
        show_menu();
        char ch;
        for (size_t i = 0; i < MAX; i++)
        {
            std::cout << "Enter your choice: \n";
            (std::cin >> ch).get();
            switch (ch)
            {
            case 'e':
                pc[i] = new employee();
                pc[i]->SetAll();
                break;
            case 'm':
                pc[i] = new manager();
                pc[i]->SetAll();
                break;
            case 'f':
                pc[i] = new fink();
                pc[i]->SetAll();
                break;
            case 'h':
                pc[i] = new highfink();
                pc[i]->SetAll();
                break;
            default:
                break;
            }
        }
        for (size_t i = 0; i < MAX; i++)
        {
            pc[i]->ShowAll();
            pc[i]->WriteAll(fout);
        }
    }
    else
    {
        int classtype;
        char ch;
        int i = 0;
        while ((fin >> classtype).get(ch))
        {
            switch (classtype)
            {
            case classkind::Employee:
                pc[i] = new employee();
                pc[i]->GetAll(fin);
                break;
            case classkind::Manager:
                pc[i] = new manager();
                pc[i]->GetAll(fin);
                break;
            case classkind::Fink:
                pc[i] = new fink();
                pc[i]->GetAll(fin);
                break;
            case classkind::Highfink:
                pc[i] = new highfink();
                pc[i]->GetAll(fin);
                break;
            default:
                break;
            }
            i++;
        }
        for (size_t i = 0; i < MAX; i++)
        {
            pc[i]->ShowAll();
        }
    }

    for (size_t i = 0; i < MAX; i++)
    {
        delete pc[i];
    }
}

void show_menu()
{
    std::cout << "e) employeee  m) manager" << std::endl;
    std::cout << "f) flink  m)  h) highflink" << std::endl;
}
#include <iostream>
#include <cstring>

class Plorg
{
private:
    char name[20];
    int ci;

public:
    Plorg(char n[] = "Plorga", int value = 50)
    {
        strcpy(name, n);
        ci = 50;
    };
    void report() const;
    void setCI(int value) { ci = value; };
};

void Plorg::report() const
{
    std::cout << "Plorg(name=" << name << ", ci=" << ci << ")\n";
}

int main()
{
    Plorg pl;
    pl.report();
    pl.setCI(100);
    pl.report();

    Plorg pl2("My plorg", 100);
    pl2.report();
    return 0;
}
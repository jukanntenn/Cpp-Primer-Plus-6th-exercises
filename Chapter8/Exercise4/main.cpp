#include <iostream>
#include <cstring>

using namespace std;
struct stringy
{
    char *str;
    int ct;
};

// prototypes for set(), show(), and show() go here
void set(stringy &, const char *);
void show(stringy, int times = 1);
void show(char *, int times = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";
    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");

    delete beany.str;
    return 0;
}

void set(stringy &s, const char *str)
{
    int len = strlen(str);
    s.str = new char[len];
    strcpy(s.str, str);
    s.ct = len;
}

void show(stringy sy, int times)
{
    for (int i = 0; i < times; i++)
    {
        show(sy.str);
    }
}

void show(char *str, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << str << endl;
    }
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::cout;
using std::string;

void display(const string &s);

int main()
{
    using std::cin;

    using std::vector;

    cout << "Enter the list of friends' names ('q' to end): \n";

    vector<string> names1;
    string name;
    getline(cin, name);
    while (name != "q")
    {
        names1.push_back(name);
        getline(cin, name);
    }
    std::sort(names1.begin(), names1.end());
    std::for_each(names1.begin(), names1.end(), display);
    cout << "\n";

    cout << "Enter another list of friends' names ('q' to end): \n";

    vector<string> names2;
    getline(cin, name);
    while (name != "q")
    {
        names2.push_back(name);
        getline(cin, name);
    }
    std::sort(names2.begin(), names2.end());
    std::for_each(names2.begin(), names2.end(), display);
    cout << "\n";

    vector<string> names(names1.size() + names2.size());
    std::merge(names1.begin(), names1.end(), names2.begin(), names2.end(), names.begin());

    auto last = std::unique(names.begin(), names.end());
    std::for_each(names.begin(), last, display);
    cout << "\n";

    return 0;
}

void display(const string &s)
{
    cout << s << "\t";
}
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <functional>

void display(const std::string &s);

int main()
{
    using std::bind1st;
    using std::cerr;
    using std::ifstream;
    using std::ofstream;
    using std::string;
    using std::vector;

    ifstream mat = ifstream("mat.dat");
    ifstream pat = ifstream("pat.dat");
    ofstream matnpat = ofstream("matnpat.dat");

    if (!mat.is_open() || !pat.is_open() || !matnpat.is_open())
    {
        cerr << "Wrong files\n";
        exit(EXIT_FAILURE);
    }

    string name;
    vector<string> v1;
    while (!mat.eof())
    {
        getline(mat, name);
        v1.push_back(name);
    }
    std::sort(v1.begin(), v1.end());
    std::for_each(v1.begin(), v1.end(), display);

    vector<string> v2;
    while (!pat.eof())
    {
        getline(pat, name);
        v2.push_back(name);
    }
    std::sort(v2.begin(), v2.end());
    std::for_each(v2.begin(), v2.end(), display);

    vector<string> names(v1.size() + v2.size());
    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), names.begin());

    auto last = std::unique(names.begin(), names.end());
    for (auto it = names.begin(); it != last; it++)
    {
        matnpat << *it << std::endl;
    }

    mat.close();
    pat.close();
    matnpat.close();
    return 0;
}

void display(const std::string &s)
{
    std::cout << s << "\n";
}
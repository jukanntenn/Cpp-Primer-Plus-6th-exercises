#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    using std::cerr;
    using std::cin;
    using std::cout;
    using std::endl;
    using std::exit;
    using std::ofstream;
    if (argc < 2)
    {
        cerr << "Usage: " << argv[0] << " filename\n";
        exit(EXIT_FAILURE);
    }

    ofstream fout(argv[1]);
    if (!fout.is_open())
    {
        cerr << "Could not open " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the content, # to end: " << endl;

    char ch;
    while ((ch = cin.get()) != '#')
    {
        fout << ch;
    }

    return 0;
}
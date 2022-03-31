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
    using std::ifstream;
    using std::ofstream;
    if (argc < 3)
    {
        cerr << "Usage: " << argv[0] << " <source filename> <destination filename>\n";
        exit(EXIT_FAILURE);
    }

    ifstream src(argv[1]);
    if (!src.is_open())
    {
        cerr << "Could not open " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    ofstream dst(argv[2]);
    if (!dst.is_open())
    {
        cerr << "Could not open " << argv[2] << endl;
        exit(EXIT_FAILURE);
    }

    char ch;
    while (src.get(ch))
    {
        dst << ch;
    }

    return 0;
}
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
    if (argc < 4)
    {
        cerr << "Usage: " << argv[0] << " <source filename1> <source filename2> <destination filename>\n";
        exit(EXIT_FAILURE);
    }

    ifstream src1(argv[1]);
    if (!src1.is_open())
    {
        cerr << "Could not open " << argv[1] << endl;
        exit(EXIT_FAILURE);
    }

    ifstream src2(argv[2]);
    if (!src2.is_open())
    {
        cerr << "Could not open " << argv[2] << endl;
        exit(EXIT_FAILURE);
    }

    ofstream dst(argv[3]);
    if (!dst.is_open())
    {
        cerr << "Could not open " << argv[3] << endl;
        exit(EXIT_FAILURE);
    }

    char ch;
    while (!src1.eof() && !src2.eof())
    {
        while (src1.get(ch) && ch != '\n')
        {
            dst << ch;
        }
        if (src2.peek() != '\n')
        {
            dst << ' ';
            while (src2.get(ch) && ch != '\n')
            {
                dst << ch;
            }
        }
        else
        {
            src2.get();
        }
        dst << '\n';
    }

    if (!src1.eof())
    {
        while (src1.get(ch))
        {
            dst << ch;
        }
    }

    if (!src2.eof())
    {
        while (src2.get(ch))
        {
            dst << ch;
        }
    }

    return 0;
}
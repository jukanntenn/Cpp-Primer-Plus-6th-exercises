#include "cpmv.h"

int main()
{
    Cpmv one("Q123456", "Z654321");
    one.Display();

    Cpmv two = one;
    two.Display();

    // pass -fno-elide-constructors option to g++
    // see: https://stackoverflow.com/questions/13099603/c11-move-constructor-not-called-default-constructor-preferred
    Cpmv three(one + two);
    three.Display();

    Cpmv four;
    four = three;
    four.Display();

    four = four + three;
    four.Display();

    return 0;
}
#include "move.h"

int main()
{
    Move m1(1.1, 2.2);
    Move m2(2.2, 3.3);
    m1.showmove();
    m2.showmove();
    Move nm = m1.add(m2);
    nm.showmove();
    nm.reset(111, 222);
    nm.showmove();

    return 0;
}
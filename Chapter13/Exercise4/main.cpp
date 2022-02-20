#include "port.h"

int main()
{
    Port p0;
    Port p1("test port", "ruby", 999);
    Port p2;
    p2 = p1;
    p2 += 1000;

    VintagePort vp0;
    VintagePort vp1 = VintagePort("test vintage port", 999, "lovely vintage", 1982);
    VintagePort vp2;
    vp2 = vp1;
    vp2 -= 500;

    Port &vp0_ref = vp0;
    Port &vp1_ref = vp1;
    Port &vp2_ref = vp2;

    std::cout << "p0: \n";
    std::cout << p0 << std::endl;
    p0.Show();

    std::cout << "p1: \n";
    std::cout << p1 << std::endl;
    p1.Show();

    std::cout << "p2: \n";
    std::cout << p2 << std::endl;
    p2.Show();

    std::cout << "vp0: \n";
    std::cout << (VintagePort &)vp0 << std::endl;
    vp0_ref.Show();

    std::cout << "vp1: \n";
    std::cout << (VintagePort &)vp1 << std::endl;
    vp1_ref.Show();

    std::cout << "vp2: \n";
    std::cout << (VintagePort &)vp2 << std::endl;
    vp2_ref.Show();

    return 0;
}
#include <iostream>
#include "stonewt.h"

int main()
{
    using std::cout;
    using std::endl;

    Stonewt s1 = Stonewt(100.4);
    Stonewt s2 = Stonewt(100, 0.4);
    Stonewt s3 = s1 + s2;
    Stonewt s4 = s3 - s1;
    Stonewt s5 = 10 * s1;
    Stonewt s6 = s2 * 10;

    s1.stone_form();
    s2.stone_form();
    s3.stone_form();
    s4.stone_form();
    s5.stone_form();
    s6.stone_form();
    cout << "s1 (In stone form): " << s1;
    cout << "s2 (In stone form): " << s2;
    cout << "s2 (In stone form): " << s3;
    cout << "s4 (In stone form): " << s4;
    cout << "s5 (In stone form): " << s5;
    cout << "s6 (In stone form): " << s6;

    s1.ipounds_form();
    s2.ipounds_form();
    s3.ipounds_form();
    s4.ipounds_form();
    s5.ipounds_form();
    s6.ipounds_form();
    cout << "s1 (In integer pounds form): " << s1;
    cout << "s2 (In integer pounds form): " << s2;
    cout << "s2 (In integer pounds form): " << s3;
    cout << "s4 (In integer pounds form): " << s4;
    cout << "s5 (In integer pounds form): " << s5;
    cout << "s6 (In integer pounds form): " << s6;

    s1.fpounds_form();
    s2.fpounds_form();
    s3.fpounds_form();
    s4.fpounds_form();
    s5.fpounds_form();
    s6.fpounds_form();
    cout << "s1 (In floating-point pounds form): " << s1;
    cout << "s2 (In floating-point pounds form): " << s2;
    cout << "s2 (In floating-point pounds form): " << s3;
    cout << "s4 (In floating-point pounds form): " << s4;
    cout << "s5 (In floating-point pounds form): " << s5;
    cout << "s6 (In floating-point pounds form): " << s6;
    return 0;
}
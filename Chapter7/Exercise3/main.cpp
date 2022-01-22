#include <iostream>

using namespace std;

struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void display(const box);
void set_volume(box *);

int main()
{
    box b = {"Boxx Inc.", 12.5, 14.1, 23.3, 0};
    display(b);
    set_volume(&b);
    display(b);
}

void display(const box b)
{
    cout << "Maker: " << b.maker << endl;
    cout << "Height: " << b.height << endl;
    cout << "Width: " << b.width << endl;
    cout << "Length: " << b.length << endl;
    cout << "Volume: " << b.volume << endl;
}

void set_volume(box *pb)
{
    pb->volume = pb->height * pb->width * pb->width;
}
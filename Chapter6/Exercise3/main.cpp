#include <iostream>

int main()
{
    using namespace std;

    cout << "Please enter one of the following choices:\n";
    cout << "c) carnivore        p) pianist\n";
    cout << "t) tree             g) game\n";
    cout << "f\n";
    cout << "Please enter a c, p, t, or g: ";
    char ch;
    cin >> ch;
    while (ch != 'c' && ch != 'p' && ch != 't' && ch != 'g')
    {
        cout << "Please enter a c, p, t, or g: ";
        cin >> ch;
    }

    switch (ch)
    {
    case 'c':
        cout << "A maple is a carnivore.\n";
        break;
    case 'p':
        cout << "A maple is a pianist.\n";
        break;
    case 't':
        cout << "A maple is a tree.\n";
        break;
    case 'g':
        cout << "A maple is a game.\n";
        break;
    default:
        break;
    }

    return 0;
}
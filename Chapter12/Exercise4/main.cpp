#include <iostream>
#include <cctype> // or ctype.h
#include "stack.h"

using std::cout;
using std::endl;

void show_bottom(Stack st);

int main()
{
    using namespace std;
    Stack st; // create an empty stack
    char ch;
    unsigned long po;
    cout << "Please enter A to add a purchase order,\n"
         << "P to process a PO, or Q to quit.\n";
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout << '\a';
            continue;
        }
        switch (ch)
        {
        case 'A':
        case 'a':
            cout << "Enter a PO number to add: ";
            cin >> po;
            if (st.isfull())
                cout << "stack already full\n";
            else
                st.push(po);
            break;
        case 'P':
        case 'p':
            if (st.isempty())
                cout << "stack already empty\n";
            else
            {
                st.pop(po);
                cout << "PO #" << po << " popped\n";
            }
            break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";
    show_bottom(st);

    Stack st2 = st;
    show_bottom(st2);

    while (!st.isempty())
    {
        Item item;
        st.pop(item);
        cout << "#" << item << " poped\n";
    }

    return 0;
}

void show_bottom(Stack st)
{
    if (st.isempty())
    {
        cout << "Empty stack.\n";
        return;
    }

    Item item;
    while (!st.isempty())
    {
        st.pop(item);
    }
    cout << "Item in stack bottom is: " << item << endl;
}
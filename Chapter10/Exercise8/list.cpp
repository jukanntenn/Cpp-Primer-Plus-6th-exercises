#include "list.h"

List::List()
{
    tail = 0;
}

bool List::isempty() const
{
    return tail == 0;
}

bool List::isfull() const
{
    return tail == MAX;
}

bool List::add(const Item &item)
{
    if (tail < MAX)
    {
        items[tail++] = item;
        return true;
    }
    return false;
}

void List::visit(void (*pf)(Item &item))
{
    for (int i = 0; i < tail; i++)
    {
        (*pf)(items[i]);
    }
}
#include "stack.h"

Stack::Stack(int n)
{
    pitems = new Item[n];
    size = n;
    top = 0;
}

Stack::Stack(const Stack &st)
{
    size = st.size;
    top = st.top;
    pitems = new Item[size];
    for (int i = 0; i <= top; i++)
    {
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete[] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == size;
}

bool Stack::push(const Item &item)
{
    if (isfull())
    {
        return false;
    }
    this->pitems[++top] = item;
    return true;
}

bool Stack::pop(Item &item)
{
    if (isempty())
    {
        return false;
    }
    item = this->pitems[top--];
    return true;
}

Stack &Stack::operator=(const Stack &st)
{
    if (this == &st)
    {
        return *this;
    }

    size = st.size;
    top = st.top;
    delete[] pitems;
    pitems = new Item[size];
    for (int i = 0; i <= top; i++)
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}
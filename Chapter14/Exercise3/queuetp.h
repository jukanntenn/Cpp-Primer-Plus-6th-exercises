#ifndef QUEUETP_H_
#define QUEUETP_H_

template <typename T>
class QueueTP
{
private:
    enum
    {
        Q_SIZE = 10
    };
    struct Node
    {
        T item;
        Node *next;
    };

    int items;
    const int qsize;
    Node *front;
    Node *rear;

public:
    QueueTP(int qs = Q_SIZE);
    ~QueueTP();
    bool isempty() const
    {
        return items == 0;
    }
    bool isfull() const
    {
        return items == qsize;
    }
    int queuecount() const
    {
        return items;
    }
    bool enqueue(const T &item);
    bool dequeue(T &item);
};

template <typename T>
QueueTP<T>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <typename T>
QueueTP<T>::~QueueTP()
{
    Node *temp;
    while (front != 0)
    {
        temp = front;
        front = front->next;
        delete temp;
    }
}

template <typename T>
bool QueueTP<T>::enqueue(const T &item)
{
    if (isfull())
    {
        return false;
    }

    Node *node = new Node;
    node->item = item;
    node->next = 0;
    if (front == 0)
    {
        front = node;
    }
    else
    {
        rear->next = node;
    }
    items++;
    rear = node;
    return true;
}

template <typename T>
bool QueueTP<T>::dequeue(T &item)
{
    if (isempty())
    {
        return false;
    }

    item = front->item;
    Node *temp = front;
    front = front->next;
    delete temp;
    items--;
    if (items == 0)
    {
        rear = 0;
    }
    return true;
}
#endif
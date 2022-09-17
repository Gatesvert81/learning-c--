#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void Enqueue(int x)
{
    Node *temp = new Node;
    temp->data = x;
    temp->next = NULL;
    if (tail != NULL)
    {
        tail->next = temp;
        tail = temp;
    }
    else
    {
        tail = temp;
        head = temp;
    }
}

void Dequeue()
{
    Node* temp = head;
    if (head == NULL)
    {
        cout << "Queue is Empty";
        return;
    }
    if (head = tail)
    {
        head = tail = NULL;
    }
    else
    {
        head = head->next;
    }
    delete temp;
}

int Front()
{
    return head->data;
}

int Rear()
{
    return tail->data;
}

void Queue()
{
    Node *temp = head;
    cout << "Queue: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Enqueue(2);
    Queue();
    Enqueue(5);
    Queue();
    Enqueue(1);
    Queue();
    Dequeue();
    Queue();
    Enqueue(4);
    Dequeue();
    Queue();
}

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *Link;
};
struct Node *top = NULL;

void Push(int x)
{
    Node *next = new Node;
    next->data = x;
    next->Link = top;
    top = next;
}

void Pop()
{
    if (top == NULL)
    {
        cout << "Stack is empty, No element to pop" << endl;
        return;
    }
    top = top->Link;
}

Node *Top()
{
    return top;
}

void Print()
{
    Node *temp = top;
    cout << "Stack is : ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Link;
    }
    cout << endl;
}

bool isEmpty()
{
    return top == NULL;
}

int main()
{
    Push(3);
    Push(28);
    Push(23);
    Print();
    Pop();
    Print();
    Push(32);
    Print();
    Pop();
    Print();
}
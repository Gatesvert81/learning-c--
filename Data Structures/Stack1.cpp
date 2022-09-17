#include <iostream>
#define MAX_SIZE 101
using namespace std;

int A[MAX_SIZE];
int top = -1;

void Push(int x)
{
    if (top == MAX_SIZE - 1)
    {
        cout << "Error: Stack overflow" << endl;
        return;
    }
    top++;
    A[top] = x;
}

void Pop()
{
    if (top == MAX_SIZE - 1)
    {
        cout << "Error: Stack is empty, no element to ba poped." << endl;
        return;
    }
    top--;
}

void Print()
{
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
int Top()
{
    return A[top];
}

int main()
{
    Push(2);
    Print();
    Push(5);
    Push(10);
    Print();
    Pop();
    Push(12);
    Print();
}
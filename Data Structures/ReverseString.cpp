#include <iostream>
#define MAX_SIZE 101
using namespace std;

char A[MAX_SIZE];
int top = -1;

void Push(char x)
{
    top++;
    A[top] = x;
}

char Pop()
{
    char v;
    v = A[top];
    --top;
    return v;
}

void Reverse(char s[], int size)
{
    for (int i = 0; i < size; i++)
    {
        Push(s[i]);
    }
    cout << "Reversed Word: ";

    for (int i = size; i >= -1; i--)
    {
        if (i == -1)
        {
            top = i;
            return;
        }
        cout << Pop();
    }
    cout << endl;
}

int main()
{
    char word[5];
    cout << "Enter a 5 letter word: ";
    cin >> word;
    Reverse(word, 5);
}
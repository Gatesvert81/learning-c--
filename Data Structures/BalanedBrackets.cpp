#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

void isBalanced(char C[])
{
    int n = strlen(C);
    stack<char> S;
    for (int i = 0; i < n; i++)
    {
        if ((C[i] == '(') || (C[i] == '{') || (C[i] == '{'))
        {
            S.push(C[i]);
        }
        else
        {
            if (S.empty() || C[i] != S.top())
            {
                cout << "not balanced";
                return;
            }
            else
            {
                S.pop();
            }
        }
    }
    if (S.empty())
    {
        cout << " Parenthesis are balanced";
    }
    else
    {
        cout << "Parenthesis are not balanced";
    }
}

int main()
{
    char C[53];
    cout<< "input :";
    gets(C);
    puts(C);
    isBalanced(C);
}
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char *s = "MeTropoliTan";

    for (int x = 0; s[x] != '\0'; x++)
    {
        if (x % 2 != 0 && islower(s[x]))
        {
            s[x] = toupper(s[x]);
        }
        else if (isupper(s[x]))
        {
            s[x] = tolower(s[x]);
        }
        else
        {
            s[x] = s[x]--;
        }
    }
    cout << s << endl;
}
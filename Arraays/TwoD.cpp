#include <iostream>
using namespace std;

int main()
{
    char name[5][25];
    
    cout << "Enter names of the starting 5 players" << endl;
    for (int i = 0; i < 5; i++)
    {
        gets(name[i]);
    }
    
    cout << "Here are the names of the starting 5 players" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << name[i] << endl; 
    }
    
}

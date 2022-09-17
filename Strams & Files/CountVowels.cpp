#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void createFile()
{
    fstream fil;
    char name[10];
    char ch;
    cout << "Name the file you want to create:";
    cin >> name;
    fil.open(name, ios::out);
    char lin[80];

    // Write in the file
    do
    {
        cout << "\n Write a text into the file:";
        gets(lin);
        // cin >> lin;
        cout << " lin" << lin;
        fil << lin << endl;
        cout << "\n Do you want to add another line (y/n)";
        cin >> ch;
    } while (ch != 'n');
    fil.close();
}

int main()
{
    createFile();
}
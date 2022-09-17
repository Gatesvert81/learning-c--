#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void openFile()
{
    // Create a file
    ofstream fil;
    fil.open("ABC.txt");
    char lin[80];
    char ch;
    // Input into the file
    do
    {
        printf("\n Enter lines of text in the text file");
        cout << "\n Enter lines of text in the text file: ";
        gets(lin);
        // Write into file
        fil << lin << endl;
        cout << "Do you want to enter more lines of text (y/n)";
        cin >> ch;

    } while (ch != 'n');
    // close File /
    fil.close();
}

void readFile()
{
    fstream fil; // Creates an object of class fstream

    fil.open("ABC.txt", ios::in); // Opens  the file "ABC.txt" in Read mode

    char lin[80]; // String Buffer


    /*while (fil.getline(lin, 80))
    {
        puts(lin);
    }
    */
    // the eof() fucntion checks for the end of file
    while (!fil.eof())
    {
        fil.getline(lin, 80);
        puts(lin);
    }
}

void transferContent(){
    char fn1[20], fn2[20];
    fstream fil, fil2;

    fil1.open(fn1, ios::in);
    fil2.open(fn2, ios::out);
    char lin[80];
    while (fil1.getline(lin,80))
    {
        fil2<<lin<<endl;
    }
    fil.close();
    fil2.close();
    
}

int main()
{
    transferContent();
}
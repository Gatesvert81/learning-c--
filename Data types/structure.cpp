#include <iostream>
#include <string.h>
# include <stdio.h> 
using namespace std;

struct Library
{
    char Boook_Name[15];
    int Book_IdNo ;
    char Book_Shelf[5];
};


int main()
{
    Library L1;
    char str[] = "Cleopatra";

    cout<<"Input Book Name :";
    cin>>L1.Boook_Name;
    cout<<"\nInput Book IdNo :";
    cin>>L1.Book_IdNo;
    cout<<"\nInput Book Shelf :";
    cin>>L1.Book_Shelf;

    // if ( stremp(str, L1.Boook_Name) == 0 )
    // {
    //     cout<<"That is a good book"<<endl;
    // } 
    // else 
    // {
    //     cout<<"That is a horible book";
    // }

}
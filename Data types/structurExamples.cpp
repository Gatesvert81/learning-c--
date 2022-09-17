# include <iostream> 
# include <conio.h> 
# include <stdio.h> 
using namespace std;

struct team
{
    char Player_Name[15];
    int Player_No;
    char Player_Type[20];
};

int main()
{
    team Players[2];

    for (int i = 0; i < 2; i++)
    {
        // Player Name 
        cout<<"Input Player Name: "; 
        cin>>Players[i].Player_Name;
        // Player Nuner 
        cout<<"Input Player No: "; 
        cin>>Players[i].Player_No;
        // Player Type 
        cout<<"Input Player Type: "; 
        cin>>Players[i].Player_Type;
    }

    for (int i = 0; i < 2; i++)
    {
        cout<<"Player "<< i << "name "<< Players->Player_Name ;
        cout<<"Player "<< i << "number "<< Players->Player_No ;
        cout<<"Player "<< i << "type "<< Players->Player_Type ;
    }
    



}
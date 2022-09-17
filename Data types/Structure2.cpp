#include <iostream>
using namespace std;

struct Award
{
    char name[21];
    long price;
};

void displayData(char name[], int price)
{
    cout << "Name: " << name << endl;
    cout << "Price: " << price << endl;
}

void inputWinners(Award winner[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "Input Name: ";
        gets(winner[i].name);
        cout << endl
             << "Input Price: ";
        cin >> winner[i].price;
    }
    for (int i = 0; i < n; i++)
    {
        displayData(winner[i].name, winner[i].price);
    }
}

void honorStudents(Award winner[], int n)
{
    cout << "The Students with the Prices more than $50000: ";
    for (int i = 0; i < n; i++)
    {
        if (winner[i].price > 50000)
        {
            displayData(winner[i].name, winner[i].price);
        }
    }
}

void highestPrice(Award winner[], int n)
{
    int highest = 0;
    Award student;
    for (int i = 0; i < n; i++)
    {
        if (winner[i].price > highest)
        {
            highest = winner[i].price;
            student = winner[i];
        }
    }
    cout << "Student with the highest Price: " << endl;
    displayData(student.name, student.price);
}

int main()
{
    Award winners[5];
    int n;
    cout << "How many student are winners: ";
    cin >> n;
    inputWinners(winners, n);
    honorStudents(winners, n);
    highestPrice(winners, n);
}
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void findsecondfirst(int A[3][3], int row, int col)
{
    //Creating for loop to loop throught the values of the array and deterseconde thelargest value
    int first = A[0][0];
    int second = A[0][0];

    // Find the largest value 
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            first = A[i][j] > first ? A[i][j] : first;
        }
    }

    // Find the second Largest value by comparing it to the largest value 

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            second = (A[i][j] > second) && (A[i][j] < first) ? A[i][j] : second;
        }
    }
    // Print the Largest and second largest value 
    cout << "largest Value: " << first << endl;
    cout << "Second largest Value: " << second << endl;
}

int main()
{
    int arr[3][3];

// Input Values for the array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }
//  Find the largest and second largest value 
    findsecondfirst(arr, 3, 3);

// Print out the values of the array 
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << setw(4) << arr[i][j];
        }
        cout << endl;
    }
}
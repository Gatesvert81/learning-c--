#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void calcLeftDiagonal(int A[][5])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i][4 - i] << endl;
        sum += A[i][4 - i];
    }
    cout << " The sum of the left Diagonal is: " << sum << endl;
}

int main()
{
    int matrix[5][5];

    cout << "inpur elements into matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            cout << endl;
        }
    }

    cout << "matrix:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << setw(8) << matrix[i][j];
        }
        cout << endl;
    }

    calcLeftDiagonal(matrix);
}
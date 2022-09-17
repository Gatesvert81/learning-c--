#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

void addMatrix(int A[][2], int B[][2])
{

    int matrixC[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrixC[i][j] = A[i][j] + B[i][j];
        }
    }

    cout<< "This is the added Matrix";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << setw(8) << matrixC[i][j];
        }
        cout << endl;
    }
}

int main()
{
    int matrixA[2][2];
    int matrixB[2][2];

    cout << "Input into matrix A" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrixA[i][j];
            cout << endl;
        }
    }

    cout << "Input into matrix B" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrixB[i][j];
            cout << endl;
        }
    }

    addMatrix(matrixA, matrixB);
}
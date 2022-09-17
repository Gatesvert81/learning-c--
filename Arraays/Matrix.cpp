#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
    int matrix[4][4];

    // Inputing into the matrix
    cout << "input values into the matrix " << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "matrix row" << i << endl;
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
            cout << endl;
        }
    }

    cout << "This is yout 4 X 4 matrix " << endl;
    for (int i = 0; i < 4; i++)
    {
        //    cout << "matrix row" << i << endl;
        for (int j = 0; j < 4; j++)
        {
            cout << setw(8) << matrix[i][j];
        }
        cout << endl;
    }
}

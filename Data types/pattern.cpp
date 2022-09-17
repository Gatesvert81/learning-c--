#include <iostream>
using namespace std;

/*  How to solve any pattern questions
How to approach :
1. no. of lines = no. of rows = no. of times the loop will run
2. Identify for every row no.
how many cols are there
types of elements in the col
3. what do you need to print . eg * , numbers, letters etc
Try to find the formula relating the rows to the col
*/

void pattern1(int n)
{
    // this prints
    /*
     *
     * *
     * * *
     * * * *
     * */

    for (int row = 1; row <= n; row++)
    {
        //   for every row, run the col
        for (int col = 1; col <= row; col++)
        {
            // what needs to be printed
            cout << "* ";
        }
        // when one row is printed we need to add a new line

        cout << endl;
    }
}

void pattern2(int n)
{
    // this prints
    /*
     * * * *
     * * * *
     * * * *
     * * * *
     * */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    /*
     * * * * *
     * * * *
     * * *
     * *
     *
     * */

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    /*
    1
    12
    123
    1234
    12345
    * */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 2; col < row + 2; col++)
        {
            cout << col - 1 << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     * * * *
     * * *
     * *
     *
     * */
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; row <= n / 2 ? col <= row : col < n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    /*
     *
     ***
     *****
     *******
     *********
     */

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < (row * 2) - 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    /*
    *********
    `*     *
      *   *
       * *
        *
    * */
    for (int row = 0; row < n; row++)
    {
        if (row < 1)
        {
            // cout << " ";
            for (int col1 = 0; col1 < n * 2; col1++)
            {
                cout << "*";
            }
        }
        else
        {
            for (int col = 2; col < row + 2; col++)
            {
                cout << " ";
            }
            cout << "*";
            for (int col = 0; col < ((n * 2) - (row * 2)) - 2; col++)
            {
                cout << " ";
            }
            // if (row = n-1)
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    /*
     *
     * *
     * * *
     * * * *
     * * * * *
     * * * *
     * * *
     * *
     *
     * */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; row <= n / 2 ? col < n / 2 - row : col < row - n / 2; col++)
        {
            cout << " ";
        }

        for (int col = 1; row <= n / 2 ? col <= row : col < n - row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    /*
              1
            2 1 2
          3 2 1 2 3
        4 3 2 1 2 3 4
      5 4 3 2 1 2 3 4 5
      */
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col < (n * 2) - (row * 2); col++)
        {
            cout << " ";
        }
        for (int col = 1; col <= 2; col++)
        {
            if (col <= 1)
            {
                for (int i = 0; i < row; i++)
                {
                    cout << row - i << " ";
                }
            }
            else
            {

                for (int i = 1; i < row; i++)
                {
                    cout << (i + 1) << " ";
                }
            }

            // or (int i = 1; i < row; i++)
            // {

            // }
        }
        cout << endl;
    }
}

void pattern10(int n)
{
    /*
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    4 3 2 1 2 3 4
    4 4 4 4 4 4 4
    4 3 3 3 3 3 4
    4 3 2 2 2 3 4
    */
    int rownum = n + (n - 1);
    for (int row = 0; row < rownum; row++)
    {
        for (int col = row; col >= 1; col--)
        {
            cout << n - col;
        }
        for (int i = 2; i < row - 1; i++)
        {
            cout << n - i;
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    /*
              1
            2 3 4
          5 6 7 8 9
        10 11 12 13 14
    */
    int number = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row; col++)
        {
            cout << ++number << " ";
        }
        cout << endl;
    }
}

void pattern12()
{
    /*
    3
    9
    15
    21
    27

    ---------------.|.---------------
    ------------.|..|..|.------------
    ---------.|..|..|..|..|.---------
    ------.|..|..|..|..|..|..|.------
    ---.|..|..|..|..|..|..|..|..|.---
    -------------WELCOME-------------
    ---.|..|..|..|..|..|..|..|..|.---
    ------.|..|..|..|..|..|..|.------
    ---------.|..|..|..|..|.---------
    ------------.|..|..|.------------
    ---------------.|.---------------
    */

   int count = 3;

    for (int i = 1; i < 12; i++)
    {
        for (int j = 1; j < (36/2) - i*3; j++)
        {
            cout << "-";
        }

        for (int j = 0; j < count ; j++)
        {
            cout << " " ;
        }
        
        for (int j = 1; j < (36/2) - i*3; j++)
        {
            cout << "-";
        }
        count += 6; 
        cout << endl;
    }

    // int count = 3 ;
    // for (int i = 1; i < 6; i++)
    // {
    //    cout << count << endl;
    //    count += 6;
       
    // }
    

}

int main()
{

    pattern12();
}
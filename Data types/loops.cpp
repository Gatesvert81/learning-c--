#include <iostream>
using namespace std;

void sumofseries(int n)
{
    int sum = 0, oddnum = 1;

    for (int i = 0; i < n; i++)
    {
        sum = sum + ( oddnum * oddnum * oddnum ) ;
        oddnum = oddnum + 2;
        cout << "odd :" << oddnum << endl;
    };

//     while (i <= n * 2)
//     {
//         cout << i << endl;
//         sum = sum + i;
//         i = i + 2;
//     }
    cout << "sum :" << sum << endl;
}

int main()
{
    int num;
    cout << "Input number: ";
    cin >> num;
    sumofseries(num);
}
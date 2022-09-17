#include <iostream>
using namespace std;

int main()
{
    int B[2][3] = {1,2,3}, {4,6,8};
    int *p;
    cout << *(B + 1)<< endl;
    cout << B[0][0] << endl;
}
#include <iostream>
using namespace std;

class Fibonacci
{
private:
    int fibArr[10];

public:
    Fibonacci()
    {
        fibArr[0] = 1;
        fibArr[1] = 1;
    }
    void CalcFib()
    {
        for (int i = 2; i < 10; i++)
        {
            // fibArr[i] = 0;
            fibArr[i] = fibArr[i-1] + fibArr[i - 2];
        }

        for (int i = 0; i < 10; i++)
        {
            cout << fibArr[i] << endl;
        }
    };
};

int main()
{
    Fibonacci newFib;
    newFib.CalcFib();
}
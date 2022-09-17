#include <iostream>
using namespace std;

class trial
{
private:
    int t1;
    int t2;

public:
    trial(int a, int b) // constructor function
    {
        t1 = a;
        t2 = b;
        cout << " This is a trial program";
    }
    void output()
    {
        cout << endl
             << " The sum of the variables entered is " << t1 + t2;
    }
    ~trial() // destructor function
    {
        cout << " \n The trial program is over";
    }
};
int main()
{
    trial t(1000, 2000);
    t.output();
}
#include <iostream>
using namespace std;

class Max
{
private:
    int a, b, c;

public:
    // Max();
    void Read()
    {
        cout << "Input the value for a, b , c" << endl;
        cin >> a >> b >> c;
    }
    void Display()
    {
        cout << "Value for a: " << a << endl;
        cout << "Value for b: " << b << endl;
        cout << "Value for c: " << c << endl;
    }

    void greatestNumber()
    {
        if (a > b)
        {
            if (a > c)
            {
                cout << "The greatest number is: " << a << endl;
            }
            else
            {
                cout << "The greatest number is: " << c << endl;
            }
        }
        else
        {
            if (b > c)
            {
                cout << "The greatest number is: " << b << endl;
            }
            else
            {
                cout << "The greatest number is: " << c << endl;
            }
        }
    }
};

int main()
{
    Max newMax;
    newMax.Read();
    newMax.Display();
    newMax.greatestNumber();
}
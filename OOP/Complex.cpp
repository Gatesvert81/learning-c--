#include <iostream>
using namespace std;

struct Complex
{
    int real;
    int imag;
};

void addComplexNumbers(Complex c1, Complex c2)
{
    // ??Adding all real numbers
    int allReal = c1.real + c2.real;
    int allImag = c1.imag + c2.imag;
    //displaying total sum values
    cout << c1.real << " + " << c1.imag << "i" << endl;
    cout << "+" << endl;
    cout << c2.real << " + " << c2.imag << "i" << endl;
    cout << allReal << " + " << allImag << "i" << endl;
}

int main()
{
    Complex c1, c2;
    c1.real = 4;
    c1.imag = 5;
    c2.imag = 3;
    c2.real = 8;
    addComplexNumbers(c1, c2);
}
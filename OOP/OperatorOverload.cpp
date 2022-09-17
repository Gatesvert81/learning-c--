#include <iostream>
using namespace std;

class Person
{
private:
    int weight;

public:
    Person(int x = 0)
    {
        weight = x;
    }
    Person operator+(Person w)
    {
        Person temp;
        temp.weight = weight + w.weight;
        return temp;
    }
    void operator++(int)
    {
        weight++;
    }
    void printValue()
    {
        cout << "Weight: " << weight;
    }
};

int main()
{
    Person p1(32), p2(43), p3;
    p3 = p1 + p2;
    p3.printValue();
    p3++;
    p3.printValue();
}
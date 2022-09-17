#include <iostream>
#include <string>
using namespace std;

class Mobile
{
private:
    string name;
    int RAM;
    string processor;
    int battery;

public:
    Mobile(string name_a = "Null", int ram_a = 0, string processor_a = "smapdragon", int battery_a = 0)
    {
        name = name_a;
        RAM = ram_a;
        processor = processor_a;
        battery = battery_a;
    }
    Mobile(Mobile &mob)
    {
        name = mob.name;
        RAM = mob.RAM;
        processor = mob.processor;
        battery = mob.battery;
    }
    void getData()
    {
        cout << "Name: " << name << endl;
        cout << "RAM: " << RAM << endl;
        cout << "Processor: " << processor << endl;
        cout << "battery: " << battery << endl;
    }
};

// Mobile::Mobile(string name_a = "Null", int ram_a = 0, string processor_a = "smapdragon", int battery = 0)
// {
//     name = name;
//     RAM = RAM;
//     processor = processor;
//     battery = battery;
// }

int main()
{
    Mobile Doko;
    Mobile Doko2("Doko", 2, "eternal", 20);
    Mobile Doko3(Doko2);

    Doko.getData();
    Doko2.getData();
    Doko3.getData();
}
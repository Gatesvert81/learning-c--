#include <iostream>
using namespace std;

class FLIGHT
{
private:
    int flightNo;
    char destination[20];
    float distance;
    float fuel;

    void CALCFUEL()
    {
        if (this->distance <= 1000)
        {
            this->fuel = 500;
        } else if ( this->distance > 1000 & this->distance < 2000){
            this->fuel = 1100;
        } else  {
            this->fuel = 2200;
        }
        
    }

public:
    void FEEDINFO()
    {
        cout << "Input FLight Number: " << endl;
        cin >> this->flightNo;
        cout << "Input Destination" << endl;
        cin >> this->destination;
        cout << "Input Distance" << endl;
        cin >> this->distance;
        this->CALCFUEL();
    };
    void SHOWINFO()
    {
        cout << "Flight Number: " << this->flightNo << endl;
        cout << "Destination: " << this->destination << endl;
        cout << "Distance: " << this->distance << endl;
    };
};

int main() {
    FLIGHT FirstFLight;
    FirstFLight.FEEDINFO();
    FirstFLight.SHOWINFO();
}
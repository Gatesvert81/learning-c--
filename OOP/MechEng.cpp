#include <iostream>
using namespace std;

class FORD
{
private:
    int x, y, z, w;
public:
    FORD(int volume, int hPower, int valve, int height ) {
        x = volume ;
        y = hPower;
        z = valve ;
        w = height;
    };
    // ~FORD();
    int efficiency(int i) {
        int E ;
        E =  ((x+y)*y)/z + ((x+z)/w)*i ;
        return E ;
    }
};

int main(){
    int volume, power, valve, height;
    // cin>>
    // FORD EngineA(), EngineB;
    
}
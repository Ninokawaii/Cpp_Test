#include<iostream>
using namespace std;

class Animal{
    public:
    double CalculateSpeed(double distance, double time)
    {
        // double speed;
        // speed = distance/time;
        // return speed;
        return distance/time;
    }
    Animal(string name, double distance, double time)
    {
        cout<<name<<"speed is: "<<CalculateSpeed(distance, time)<<endl;
    }
};

int main(){
    Animal ani1("Dragon",1000.0,1.00);
    Animal ani2("T'rex",1000,1.20);

    return 0;
}


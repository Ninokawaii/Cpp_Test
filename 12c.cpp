#include <iostream>
using namespace std;

class Animal{
    public:
        string name, type;
        int age;

        int CalculateDay(int age){
            return age * 30;
        }
        
};

int main(){
    // int Day;
    Animal obj1;
    obj1.name = "Golden";
    obj1.age = 24;
    obj1.type = "Dog";
    // Day = obj1.CalculateDay(obj1.age);

    cout << "My animal 1 name is: " << obj1.name 
         << ". It has been born " << obj1.CalculateDay(obj1.age) << endl;

    Animal obj2;
    obj2.name = "LyLy";
    obj1.age = 3;
    obj1.type = "Cat";

    cout << "The animal name is: " << obj2.name << endl;

    return 0;
}
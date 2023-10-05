#include<iostream>
using namespace std;

class AnimalClass{
    public:
       string name;
       double age;
       void p1(string name){
        cout<<name<<endl;
       }
};

int main(){
    AnimalClass t1;
    t1.name = "Bruh";  
    t1.age = 2000;
    cout<<"The Dragon name is "<<t1.name
        <<" and it's "<<t1.age<<" year old"<<endl;
    t1.p1("Hey Bruhh....!");

    
    AnimalClass t2;
    t2.name = "Bro";
    t2.age = 3000;
    cout<<"The T'rex name is "<<t2.name
        <<" and it's "<<t2.age<<" year old"<<endl;
    t2.p1("Hey Broo....!");
    
}
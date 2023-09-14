#include<iostream>
#include<string>
using namespace std;

void calculateday(){

}

int main(){

     int year = 365;    
     string name;    
     int age;    
     int result;    
     
     cout << "Please input your name: ";    
     cin >> name;    
     cout << "Please input your age: ";    
     cin >> age;    

     result = age * year; 

     cout << name <<" has been born "<<result<<" days";    
     return 0; 

}
#include<iostream>
using namespace std;
int main(){

    int gra;

    cout << "Please Enter your score: ";
    cin >> gra;

    if( gra <=100 && gra >=90)
        cout<<"Your got grade A ";
    else if (gra <=89 && gra >=80)
        cout<<"Your got grade B ";
    else if (gra <=79 && gra >=70)  
        cout<<"Your got grade c ";
    else if (gra <=69 && gra >=60)
        cout<<"Your got grade D";
    else if (gra <=59 && gra >=50)
        cout<<"Your got grade E ";
    else if (gra <=49 && gra >=0)
        cout<<"Your got grade F ";
    
}
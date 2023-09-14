#include<iostream>
using namespace std;
int main(){

    int day;

    cout<<"Enter number of day from 1 to 7: ";
    cin>>day;

    switch(day)
    {
    case 1:
        cout<<"Day 1 is Monday";
        break;
    case 2:
        cout<<"Day 2 is Tuesday";
        break;
    case 3:
        cout<<"Day 3 is Wednesday";
        break;
    case 4:
        cout<<"Day 4 is Thusday";
        break;
    case 5:
        cout<<"Day 5 is Friday";
        break;
    case 6:
        cout<<"Day 6 is Saturday";
        break;
    case 7:
        cout<<"Day 7 is Sunday";
        break;

    default :
        cout<<"Please enter the number of day from 1 to 7..";

    }
    
}
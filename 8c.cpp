#include <iostream>
using namespace std;

void func(int number) 
{
    if (number % 2 != 0) {
    cout<<number<<" is Odd.";
    } else {
    cout<<number<<" is Even.";
    }
}
int main()
{
    int x;
    cout<<"Enter a number: ";
    cin>>x;

    func(x);

}
#include<iostream>
#include<cstdlib>
using namespace std;

void showVales(double,double);

int main()
{
    double x=1.2, y=4.5;

    showVales(x,y);
    return 0;
}
void showVales (double p1,double p2)
{
    cout<<p1<<endl;
    exit(0);
    cout<<p2<<endl;
}
#include <iostream>
using namespace std;

int cal(int a,int b){
  return a+b;
}

int main(){

  int a,b;
  
  cout<<"Enter two numbers:\n";
  cin>>a>>b;

  int sum=cal(a, b);

  cout<<"The sum of the two numbers is "<<sum;

  return 0;
}
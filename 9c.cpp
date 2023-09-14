#include <iostream>
using namespace std;

int findMax(int a,int b,int c){
  int max = a;
  if (b>max){
    max = b;
  }
  if (c>max){
    max = c;
  }
}
int main(){
  int a,b,c;

  cout <<"Enter three numbers:\n";
  cin>>a>>b>>c;

  int max=findMax(a,b,c);

  cout<<"The maximum of the three numbers is "<<max;

}
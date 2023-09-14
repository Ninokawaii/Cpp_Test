#include <iostream>
using namespace std;
int main() {

  int n; 
  int sum = 0;

  cout << "Enter a positive integer: ";
  cin >> n;

  if (n <= 0) 
    {
    cout << "Invalid input." << endl;
    return 1;
    }
    for (int i = 2; i <= n; i += 2) 
    {
    sum += i;
    }
    
    cout << "The sum of all even numbers from 2 to " << n << " is " << sum << endl;

    return 0;

}
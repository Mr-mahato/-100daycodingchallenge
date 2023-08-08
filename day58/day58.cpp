
#include<iostream>
#include<cstdio>
#include<cmath>
// Include headers as needed

using namespace std;

int main()
{
    // Write your code here

    // Return 0 to indicate normal termination
  int t;
  cin >> t;
  int sum = 0;
  while(t--)
  {
    int a;
    cin >> a;
    sum +=a;
  }
  cout << sum;
    return 0;
}

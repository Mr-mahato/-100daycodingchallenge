//! Print Linearly from 1 to n;

#include<iostream>
using namespace std;
int i=1;
void print(int n)
{
    if(i==n+1) return ;
    else 
    cout << i << endl;
    i++;
    print(n);
}
int main()
{
    int n;
    cout << "Enter the required number :" << endl;
    cin >>n;
    print(n);

    return 0;
}
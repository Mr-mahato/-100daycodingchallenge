//! using recursion with the help of backtracking print n to 1

#include<iostream>
using namespace std;
void print(int n , int i)
{
    if(i>n) return ;
    else 
    {
        print(n , i+1);
        cout << i << " "  ;
    }
}
int main()
{
        int n;
        cout << "Enter the value of n" << endl;
        cin >> n;
        print(n,1);

        return 0;
}
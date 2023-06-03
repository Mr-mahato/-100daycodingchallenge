//! print name 5 times


#include<iostream>
using namespace std;
int n = 0;
void print(int n , int i)
{
    if(i>n) 
    return;
    else cout << "Chandan Mahato" << endl ;
    print(n,i+1);
    cout << i << endl;
}
int main()
{

    int n;
    cout << "Enter the times you want to print your name:" << endl;
    cin >> n;

    print(n,1);

    return 0;
}
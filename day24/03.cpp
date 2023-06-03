// ! Here you have to print from n to 1

#include<iostream>
using namespace std;
int i=0;
void print(int n)
{
    if(n==i) return ;
    else 
    cout << n << endl;
    n--;
    print(n);
}
int main()
{

    int n;
    cout << "Enter the required value of n:" << endl;
    cin >> n;
    print(n);
}
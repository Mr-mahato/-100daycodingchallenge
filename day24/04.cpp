// ! This problem introduce the concept of backtracking and prininting 1 to n

#include<iostream>
using namespace std;
void print(int n , int i)
{
    if(i<1) return;
    else 
    {
        print(n,i-1);
        cout << i<< endl;
    }

}
int main()
{
 
 int n;
 cin >> n;
 print(n,n);


}
#include<iostream>
#include<limits.h>
using namespace std;
void kadens(int a[],int s)
{
    int maxi = INT_MIN,sum=0;
    for(int i=0;i<s;i++)
    {
        sum +=a[i];
    if(sum>maxi)
    {
        maxi = sum;
    }

        if(sum<0)
        sum = 0;
    }
    cout << maxi ;
}
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    kadens(arr,len);


}
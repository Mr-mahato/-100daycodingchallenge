//! --> Reversing the array with pointers and recursion , with single pointers , double pointers.
#include<iostream>
using namespace std;
// --> ⁡⁣⁣⁢​‌‌‍‍𝙏𝙝𝙞𝙨 𝙞𝙨 𝙝𝙤𝙬 𝙮𝙤𝙪 𝙨𝙤𝙡𝙫𝙚 𝙧𝙚𝙫𝙚𝙧𝙨𝙞𝙣𝙜 𝙩𝙝𝙚 𝙖𝙧𝙧𝙖𝙮 𝙪𝙨𝙞𝙣𝙜 𝙩𝙬𝙤 𝙥𝙤𝙞𝙣𝙩𝙚𝙧​⁡
void reverseDoublepointer(int a[] , int start , int end)
{
    while(start <= end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;end--;
    }
}

//--->⁡⁣⁣⁢​‌‌‍ 𝗥𝗲𝗿𝘃𝗲𝗿𝘀𝗲 𝗮𝗻 𝗮𝗿𝗿𝗮𝘆 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 𝘄𝗶𝘁𝗵 𝘁𝘄𝗼 𝗽𝗼𝗶𝗻𝘁𝗲𝗿​⁡
void recurDoublepointer(int ar[] , int start , int end)
{
    int flag= 0;
    if(start>=end)  return ;
    else {
      swap(ar[start],ar[end]);
        recurDoublepointer(ar,start+1 , end-1);
    }
}

// -->​‌‌‍⁡⁣⁣⁢ 𝗥𝗲𝘃𝗲𝗿𝘀𝗲 𝗮𝗻 𝗮𝗿𝗿𝗮𝘆 𝘂𝘀𝗶𝗻𝗴 𝗿𝗲𝗰𝘂𝗿𝘀𝗶𝗼𝗻 𝗮𝗻𝗱 𝘀𝗶𝗻𝗴𝗹𝗲 𝗽𝗼𝗶𝗻𝘁𝗲𝗿⁡​
void singleRecur(int ar[] , int i, int n)
{
    if(i>=n/2) return ;
    else 
    {
        swap(ar[i],ar[n-1-i]);
        singleRecur(ar,i+1,n);
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int len  =sizeof(arr)/sizeof(arr[0]);
    cout << "Solving through Double pointer:" << endl;
    reverseDoublepointer(arr,0,len-1);
    for(int i=0;i<len;i++)
    cout << arr[i] << " " ;
    cout << endl;
    cout << "Solving the array with recursion and two pointer" << endl;
    recurDoublepointer(arr,0,len-1);
    for(int i=0;i<len;i++)
    cout << arr[i] << " " ;
    cout << endl;

    cout << "Solving The array reverse with recursion and singel pointer" << endl;
    singleRecur(arr,0,len );
    for(int i=0;i<len;i++)
    cout << arr[i] << " " ;
    cout << endl;
    return 0;
}
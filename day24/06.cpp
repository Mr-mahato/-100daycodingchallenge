// ! This question solved the problem of printing the sum of any number till n

        /// ---- >​‌‌‍⁡⁣⁣⁢𝙩𝙝𝙞𝙨 𝙞𝙨 𝙘𝙖𝙡𝙡𝙚𝙙 𝙩𝙝𝙚 𝙥𝙖𝙧𝙖𝙢𝙖𝙩𝙚𝙧𝙞𝙘 𝙬𝙖𝙮 𝙤𝙛 𝙨𝙤𝙡𝙞𝙫𝙞𝙣𝙜 𝙩𝙝𝙚 𝙦𝙪𝙚𝙨𝙩𝙞𝙤𝙣​⁡

#include<iostream>
using namespace std;
void printSum(int n , int sum)
{
    if(n<1)
    {
        cout <<  "The final sum of num is :" << endl;
        cout << sum << endl;
        return ;
    }
    else 
    printSum(n-1 , sum+n);
}

// --->​‌‌‍‍⁡⁢⁢⁣𝙏𝙝𝙞𝙨 𝙞𝙨 𝙩𝙝𝙚 𝙬𝙖𝙮 𝙤𝙛 𝙨𝙤𝙡𝙫𝙞𝙣𝙜 𝙩𝙝𝙧𝙤𝙪𝙜𝙝 𝙛𝙪𝙣𝙘𝙩𝙞𝙤𝙣𝙖𝙡 , 𝙬𝙝𝙚𝙧𝙚 𝙮𝙤𝙪 𝙖𝙧𝙚 𝙧𝙚𝙩𝙪𝙧𝙣𝙞𝙣𝙜 𝙨𝙤𝙢𝙚𝙩𝙝𝙞𝙣𝙜.⁡​
int funcSum(int n)
{
    if(n==0) return 0;
    else 
    {
        return n + funcSum(n-1);
    }
}
int main()
{
    int n ;
    cout << "Lets take the input for n :" << endl;
    cin >> n;
    cout << "Solving through paramateric way" << endl;
    printSum(n , 0);
    cout << "Solving through functional way" << endl ;
    int ans = funcSum(n);
    cout << "The final answer is :" << endl;
    cout << ans << endl;



    return 0;
}
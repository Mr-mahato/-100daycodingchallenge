// --> solving the factorial problem with recursion
#include<iostream>
using namespace std;

// ----> ⁡⁣⁢⁣​‌‌‍𝙏𝙝𝙞𝙨 𝙨𝙤𝙡𝙪𝙩𝙞𝙤𝙣 𝙞𝙨 𝙙𝙤𝙣𝙚 𝙩𝙝𝙧𝙤𝙪𝙜𝙝 𝙁𝙪𝙣𝙘𝙩𝙞𝙤𝙣𝙖𝙡 𝙬𝙖𝙮 , 𝙬𝙝𝙚𝙧𝙚 𝙞 𝙖𝙢 𝙧𝙚𝙩𝙪𝙧𝙣𝙞𝙣𝙜 𝙨𝙤𝙢𝙚 𝙫𝙖𝙡𝙪𝙚𝙨 𝙤𝙛 𝙜𝙞𝙫𝙚𝙣 𝙣𝙪𝙢​⁡
int printFact(int n)
{
    if(n==1) return 1;
    else 
    return n*printFact(n-1);
    
    }

    // --> ⁡⁢⁣⁣​‌‌‍𝙏𝙝𝙞𝙨 𝙞𝙨 𝙙𝙤𝙣𝙚 𝙩𝙝𝙧𝙤𝙪𝙜𝙝 𝙥𝙖𝙧𝙖𝙢𝙖𝙩𝙚𝙧𝙞𝙘 𝙬𝙖𝙮​⁡
    void parametric(int n , int i)
    {
        if(n==0)
        {
            cout << i << endl;
            return ;
        }
        else parametric(n-1 , n*i);
    }
int main()
{
    int n;
    cout << "Enter the number you want to find the factorial:"<< endl;
    cin >> n;

   int res =  printFact(n);
   cout << res << endl;

   cout << "Doing same problem with paramateric way" << endl;
   parametric(n , 1);





    return 0;
}
//--> ​‌‌‍𝙧𝙚𝙫𝙚𝙧𝙨𝙞𝙣𝙜 𝙨𝙩𝙧𝙞𝙣 𝙤𝙧 𝙘𝙝𝙚𝙘𝙠𝙞𝙣𝙜 𝙞𝙩 𝙖𝙨 𝙥𝙖𝙡𝙞𝙣𝙙𝙧𝙤𝙢 𝙞𝙣 𝙧𝙚𝙘𝙪𝙧𝙨𝙞𝙤𝙣 ​
#include<string.h>
#include<iostream>
using namespace std;
bool recurPalindrom(char st[] , int i)
{
    if(i>=strlen(st)/2) return true;
    if(st[i]!=st[strlen(st)-i-1]) return false;
    return recurPalindrom(st,i+1);
}
int main()
{
    char nam[100] = "11123";
   int res =  recurPalindrom(nam,0);
    cout << res << endl;


    return 0;
}
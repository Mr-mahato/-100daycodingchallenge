// ! this program makest the sum of number till n using recursion

// sum of natural number till n
#include<stdio.h>
int naturalSum(int num)
{
    if(num==1)
    {
        return 1;
    }
    return (num + naturalSum(num-1));
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=naturalSum(n);
    printf("%d",sum);
}
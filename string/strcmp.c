
// this program uses strcmp which compairs two string and check whether the 
// the difference of ascii value of first character 
// it gives 0 when both are identical and +ve and -ve

#include<stdio.h>
#include<string.h>
int main()
{
    char a[10]="chandu";
    char b[10]="Chandu";
    int res =strcmp(a,b);
    printf("%d",res);

return 0;
}
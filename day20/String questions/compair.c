// this program is gonna compaire two first character of two string
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    scanf("%[^\n]",str1);
    scanf(" %[^\n]",str2);

int res = 0;
    for(int i=0;str1[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])
        {
            res = str1[i]-str2[i];
            break;
        }
    }

    printf("Compaired result is : %d",res);
return 0;
}
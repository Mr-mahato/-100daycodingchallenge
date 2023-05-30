// this program is gonna remove the leading and trailing spaces from a string
/*
    ie-->   where are you
    o/p->where are you(--->space erased)
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    scanf("%[^\n]",str);

    printf("Enter string is :%s\n",str);
    int c= 0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            c++;
        }
    }

    printf("Spaces present are : %d\n",c);
    int i,k=0;
    for( i=c;str[i]!='\0';i++)
    {
        str[i-c] = str[i];
        k=i-c;
    }
    str[k+1] = '\0';
    printf("Afyer removing space and trailing spaces in given string:%s\n",str);
    printf("demo:%d\n",4);

return 0;
}
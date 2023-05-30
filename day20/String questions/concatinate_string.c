// This program concatinate two string to one
#include<stdio.h>
#include<string.h>
void concatinat(char* st1 , char* st2)
{
    int len = strlen(st1);
    int k = 0,i=0;
    for( i = len;st2[k]!='\0';i++)
    {
        st1[i] = st2[k++];
    }
    st1[i] = '\0';

    
}
int main()
{
    char st1[20];
    char st2[20];
    scanf("%[^\n]",st1);
    scanf(" %[^\n]",st2);

    printf("Entered two string are:--> %s---->:%s\n\n",st1,st2);

    // ! Concatinating two string with function strcat()
    // strcat(st1 , st2);
    // printf("Concatinated string is : %s\n",st1);

    // Now printing two string with own funciton 
    concatinat(st1,st2);
    printf("After passing to function: %s\n",st1);
return 0;
}
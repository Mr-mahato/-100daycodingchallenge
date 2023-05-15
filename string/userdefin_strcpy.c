#include<stdio.h>
void usercopy(char* st1 , char* st2)
{
    int i=0;
    for( i=0;st1[i]!='\0';i++)
    {
        //*(st2+i)=*(st1+i);
        st2[i]=st1[i];
    }
    st2[i]='\0';

}
int main()
{
     char st1[100];
     scanf("%[^\n]",st1);
    char st2[100];
   // st2=st1;  --->you cannot directoy assign one string array to other with = operator
     usercopy(st1,st2);
     printf("%s\n",st2);

return 0;
}
#include<stdio.h>
#include<string.h>
void copy(char* st1 , char* st2)
{
    strcpy(st2,st1);
}
int main()
{
     char st1[10]="mahato";
    char st2[10];
   // st2=st1;  --->you cannot directoy assign one string array to other with = operator
   //  strcpy(st2,st1); -->it simply does this copy
   copy(st1,st2);
     printf("%s\n",st2);

return 0;
}
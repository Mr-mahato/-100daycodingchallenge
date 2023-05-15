// this program makes the userdefine program to concatinate two string 
#include<stdio.h>
void concatinate(char* m1 , char* m2)
{
    int i=0,j=0;
    while(*m1!='\0')
    {
      m1++;
    }
    while(*m2!='\0')
    {
        *m1=*m2;
        m1++;m2++;
    }
    *m1='\0';
}
int main()
{
 char s1[]="chandu";
 char s2[] ="mahato";
 concatinate(s1,s2);
 printf("%s\n",s1);
return 0;
}
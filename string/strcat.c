// this program makes the concatinate two string as one
#include<stdio.h>
#include<string.h>
int main()
{
    char* s1="chandu";
    char* s2="mahato";
   char s3[100] ;
   strcat(s3,s1);
   strcat(s3,s2);

    printf("%s",s3);

return 0;
}
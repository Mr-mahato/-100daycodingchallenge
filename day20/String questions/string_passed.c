// This question is based on that string is passed as argument in function 
#include<stdio.h>
void func(char* st)
{
    printf("In Function func:%s\n",st);
}
int main()
{
    char str[100] ;
    scanf("%[^\n]",str);
    printf("Before passing to function :%s\n",str);

    func(str);


return 0;
}
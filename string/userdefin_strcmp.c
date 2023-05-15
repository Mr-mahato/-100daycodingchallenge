// in this program we are gonna create own funciton which will 
// compaire two string and gives output
#include<stdio.h>
void comp(char* a , char* b)
{
    int res = 0;
    for(int i=0;a[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            res = a[i]=b[i];
            break;
        }
    }
    printf("res:%d\n",res);
}
int main()
{
 char ek[10]="PrograMmin";
 char du[10]="Programmin";
 comp(ek,du);

return 0;
}
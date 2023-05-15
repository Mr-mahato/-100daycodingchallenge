// since strrev library function doesnt work i am gonna make a mannual function 
#include<stdio.h>
#include<string.h>
void rev(char* nc)
{
    int siz = strlen(nc);
    for(int i=0;i<siz/2;i++)
    {
        int temp = *(nc+i);
        *(nc+i)=*(nc+siz-1-i);
        *(nc+siz-1-i)=temp;
    }
    printf("%s\n",nc);
}
int main()
{
    char name[20]="chandu";
    rev(name);

return 0;
}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[1001];
    scanf("%s",str);
    int arr[10] = {0};
    int c =0,k=48;
    for(int j=0;j<10;j++)
    {
        c=0;
        for(int i=0;str[i];i++)
        {
            if(k==str[i])
            {
                c++;
            }
        }
        k++;
        arr[j] = c;
    }
    for(int i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

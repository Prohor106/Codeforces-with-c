#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,len;
    char a[1000];
    scanf("%d",&x);
    for(i=0; i<x; i++)
    {
        scanf("%s",&a);
        len = strlen(a);
        if(len>10)
        {
            printf("%c%d%c",a[0],len-2,a[len-1]);
        }
 
        else
        {
            printf("%s",a);
        }
        printf("\n");
    }
    return 0;
}

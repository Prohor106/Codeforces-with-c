#include<stdio.h>
#define a 10000
int main()
{
    int x,y,i;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y; i++)
    {
        if(x%10==0)
        {
            x/=10;
        }
        else
            x-=1;
    }
    printf("%d",x);
    
    return 0;
}

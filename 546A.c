#include<stdio.h>
int main()
{
    int i,cost,dollar,banana,x=0,sum=0;
    scanf("%d%d%d",&cost,&dollar,&banana);
    for(i=1; i<=banana; i++)
    {
        x = cost*i;
        sum+=x;
    }
    if(sum>dollar)
        printf("%d",sum-dollar);
    else
        printf("0");
}

#include<stdio.h>
int main()
{
    int x,i=5,count=0,num=0;
    scanf("%d",&x);
    while(x>num)
    {
        if(x>=i)
        {
            num=num+i;
            count++;
        }
        else
            i--;
    }
    printf("%d",count);

    return 0;
}

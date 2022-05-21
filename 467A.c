#include<stdio.h>
int main()
{
    int x,y,z,i,count=0;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        scanf("%d%d",&y,&z);
        {
            if(z-y>=2)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

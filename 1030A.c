#include<stdio.h>
int main()
{
    int x,y,i,count=0;
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        scanf("%d",&y);
        {
            if(y==1)
            {
                count++;
            }
        }
    }
    if(count>=1)
        printf("HARD");
    else
        printf("EASY");
    return 0;
}

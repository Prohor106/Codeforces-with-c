#include<stdio.h>
int main()
{
    int a[5][5],i,j,x,y,z;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(a[i][j]==1)
            {
                if(i<2)
                    x = 2-i;
                else if(i>=2)
                    x=i-2;
                if(j<2)
                    y = 2-j;
                else if(j>=2)
                    y=j-2;
            }
        }
    }
    z=x+y;
    printf("%d",z);
}

#include<stdio.h>
int main()
{
    int n,i,j,a[i][j],count=0,sum=0;
    scanf("%d",&n);


    for(i=0; i<n ; i++)
    {
        sum=0;
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
            sum+=a[i][j];
        }
        if(sum>=2)
        count++;
    }

    printf("%d",count);
}

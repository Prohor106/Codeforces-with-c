#include<stdio.h>
#define max 10000
int main()
{
    int i,a[max],n,h,width=0;
    scanf("%d%d",&n,&h);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        {
            if(a[i]>h)
            {
                width+=2;
            }
            else
            {
                width+=1;
            }
        }
    }

    printf("%d",width);


    return 0;
}

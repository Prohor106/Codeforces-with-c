#include<stdio.h>
#define max 10000
int main()
{
    int n,i;
    int a[max],b[max],c[max];
    scanf("%d",&n);
    int sum_a=0, sum_b=0, sum_c=0;

    for(i=0; i<n; i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
        sum_a+= a[i];
        sum_b+= b[i];
        sum_c+= c[i];
    }


    if(sum_a==0 && sum_b==0 && sum_c==0 )
        printf("YES");
    else
        printf("NO");


    return 0;
}

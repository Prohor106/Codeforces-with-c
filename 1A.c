#include<stdio.h>
int main()
{
    long long int n,m,a;
    scanf("%lld%lld%lld",&n,&m,&a);
    long long int row_count = 0,col_count = 0;

    row_count = n/a;
    col_count = m/a;

    if(n%a!=0)
    {
        row_count++;
    }
    if(m%a!=0)
    {
        col_count++;
    }

    printf("%lld",row_count*col_count);



    return 0;
}

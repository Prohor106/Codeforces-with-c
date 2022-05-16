#include<stdio.h>
int main()
{
    int x,count=0;
    long long n;
    scanf("%lld",&n);
   
    while(n>0)
    {
        x=n%10;
        if (x==4 || x==7)
        {
            count++;
        }
        n=n/10;
    }
    if(count==4||count==7)
        printf("YES");
    else
        printf("NO");

    return 0;
}


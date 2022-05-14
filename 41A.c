#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    int d;
    scanf("%s",a);
    scanf("%s",b);
    strrev(a);
    d=strcmp(a,b);
    if(d==0)
    {
        printf("YES");
    }
    else
        printf("NO");
}

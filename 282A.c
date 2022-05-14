#include<stdio.h>
int main()
{
    int n,x=0,i;
    char str[5];
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        scanf("%s",str);
        if(str[1]=='+')
        {
            x+=1;
        }
        else if(str[1]=='-')
        {
            x-=1;
        }
    }
    printf("%d\n",x);
}

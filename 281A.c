#include<stdio.h>
int main()
{
    int n,x=0,i;
    char str[10000];
    scanf("%s",str);
    if(str[0]>=97 && str[0]<=122)
    {
        str[0]=str[0]-32;
        printf("%s",str);
    }
    else
        printf("%s",str);

    return 0;

}

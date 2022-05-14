#include<stdio.h>
#include<string.h>
int main()
{
    int x,i,len,capital=0,small=0;
    char a[100];
 
    scanf("%s",&a);
    while(a[i]!='\0')
    {
        if(a[i]>=65 && a[i]<=90)
        {
            capital++;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            small++;
        }
        i++;
    }
 
    if(capital<small)
    {
        strlwr(a);
        printf("%s",a);
    }
 
    else if(capital>small)
    {
        strupr(a);
        printf("%s",a);
    }
else if(capital==small)
    {
        strlwr(a);
        printf("%s",a);
    }
 
printf("\n");
 
return 0;
}

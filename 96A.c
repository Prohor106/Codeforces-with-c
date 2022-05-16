#include<stdio.h>
#define max 10000
int main()
{
    char a[max];
    gets(a);
    int i=0,count=0;

    while(a[i]!='\0')
    {

        if((a[i]==a[i+1])&&(a[i+1]==a[i+2])&&(a[i+2]==a[i+3])&&(a[i+3]==a[i+4])&&(a[i+4]==a[i+5])&&(a[i+5]==a[i+6]))
        {
            count++;
        }

        i++;
    }
    if(count>=1)
        printf("YES");
    else
        printf("NO");



    return 0;
}


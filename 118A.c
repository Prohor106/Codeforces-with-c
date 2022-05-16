#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{
    char a[max],a1[max];
    gets(a);
    int i=0,j=0;


    while(a[i]!='\0')
    {
        if((a[i]!='a') && (a[i]!='e') && (a[i]!='i' )&& (a[i]!='o') && (a[i]!='u' )&& (a[i]!='y') &&
                (a[i]!='A') && (a[i]!='E') && (a[i]!='I') &&( a[i]!='O' )&&( a[i]!='U') &&( a[i]!='Y'))
        {
            a1[j]='.';
            j++;

            if(a[i]>=65 && a[i]<=90)
            {
                a1[j]=a[i]+32;
                j++;
            }

            else
            {
                a1[j]=a[i];
                j++;
            }
        }
        i++;
    }
    a1[j]='\0';

    printf("%s",a1);

    return 0;
}


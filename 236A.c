#include<stdio.h>
#include<string.h>
#define max 10000
int main()
{
    char a[max];
    gets(a);
    int i,j,k,len;

    for(i=0; a[i]!='\0'; i++)
    {
        for(j=i+1; a[j]!='\0';)
        {
            if(a[i]==a[j])

            {
                for(k=j; a[k]!='\0'; k++)
                {
                    a[k]=a[k+1];
                }
            }
            else
            {
                j++;
            }
        }
    }

    len=strlen(a);

    if(len%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }


    return 0;
}


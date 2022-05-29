#include<stdio.h>
#include<string.h>
#define max 101
int main()
{
    char n[max];
    scanf("%s",&n);
    int i,j,temp;
    int l = strlen(n);

    for(i=0; i<l; i++)
    {
        for(j=i+2; j<l; j+=2)
        {
            if(n[i]>n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }
    printf("%s",n);
    return 0;
}

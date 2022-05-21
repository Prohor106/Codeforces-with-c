#include<stdio.h>
int main()
{
    int i,j,a,temp,count=0;
    scanf("%d",&a);
    char w[a],s;
    scanf(" %s",&w);
    strupr(w);
    for(i=0; i<a; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(w[i]>w[j])
            {
                temp = w[i];
                w[i] = w[j];
                w[j] = temp;
            }
        }
    }
   for(i=0; i<a; i++)
    {
        if(w[i]!=w[i+1])
        {
            count++;
        }
    }
    if(count==26)
        printf("YES");
    else
        printf("NO");
 
 
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,count1=0,count2=0;
    scanf("%d",&n);
    char ch[n];
    scanf("%s",ch);
    for(i=0 ; i<n ; i++)
    {
        if(ch[i]=='A')
            count1++;
        else
            count2++;
    }
    if(count1>count2)
        printf("Anton");
    else if(count1<count2)
        printf("Danik");
    else
        printf("Friendship");

}

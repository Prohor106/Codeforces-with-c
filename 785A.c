#include<stdio.h>
int main()
{
    int n,j,t=0,c=0,o=0,d=0,i=0,a;
     char ch[1000];
    scanf("%d",&n);

   for(j=0 ; j<n ; j++)
    {
         scanf("%s",ch);
if(ch[0]=='T')
   {t+=4;}
if(ch[0]=='C')
   {c+=6;}
if(ch[0]=='O')
   {o+=8;}
if(ch[0]=='D')
   {d+=12;}
if(ch[0]=='I')
   {i+=20;}
}

 a=t+c+o+d+i;
 printf("%d",a);



}

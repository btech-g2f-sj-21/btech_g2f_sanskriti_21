
#include <stdio.h>
int main() {
int i,n,s1=0,s2=0;
printf("enter n:");
scanf("%d",&n);
{for(i=0;i<=n;i++)
if(i%2==0)

s1=s1+i;
else
s2=s2+i; }
printf(" sum of the even numbers is:%d",s1);
printf("  \nsum of the odd numbers is: %d",s2); 
return 0; }

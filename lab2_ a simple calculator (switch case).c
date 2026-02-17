#include <stdio.h>

int main() {
 char op;
 int a,b;
 printf(" enter an operator (+,-,*,/,%): \n ");
 scanf("%c",&op);
printf(" any 2 ineger values: ");
scanf("%d%d",&a,&b);
switch(op)
{case '+' :
printf(" \n addition= %d",(a+b)); 
    break;
case '-' :
printf(" \n subtraction= %d",(a-b)); 
    break;
case '*' :
printf(" \n multiplication= %d",(a*b)); 
    break;
case '/' :
printf(" \n division= %d",(a/b)); 
    break;
case '%' :
printf(" \n remainder= %d",(a%b)); 
    break;
}
    return 0;
}
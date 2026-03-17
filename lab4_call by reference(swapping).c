//call by reference (swapping)
#include <stdio.h>
void swap_ref(int*,int*);
int main() 
{ int a,b;
    printf("Enter a & b \n");
scanf("%d%d",&a,&b);
printf("Before swapping \n");
printf("a=%d \t b=%d",a,b);
swap_ref(&a,&b);
printf("\n After swapping \n");
printf("a=%d \t b=%d",a,b);
return 0;
}
void swap_ref(int *x,int *y)
{int t;
t=*x;
*x=*y;
*y=t;
}
   

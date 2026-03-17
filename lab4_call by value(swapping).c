//call by value (swapping)
#include <stdio.h>
void swap_value(int,int);
int main() 
{ int a,b;
    printf("Enter a & b \n");
scanf("%d%d",&a,&b);
printf("Before swapping \n");
printf("a=%d \t b=%d",a,b);
swap_value(a,b);
return 0;
}
void swap_value(int x,int y)
{ int temp;
temp=x;
x=y;
y=temp;

printf("\n After swapping \n");
printf("a=%d \t b=%d",x,y);
}


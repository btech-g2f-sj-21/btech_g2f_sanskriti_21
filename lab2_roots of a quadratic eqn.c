#include <stdio.h>
#include<math.h>
int main() {
 int n1,n2,n3;
 printf(" enter coefficient of x^2: ");
 scanf("%d",&n1);
 printf(" enter coefficient of x^1: ");
 scanf("%d",&n2);
 printf(" enter coefficient of x^0: ");
 scanf("%d",&n3);
 char a,b,c;
 int discriminant=b*b-4*a*c;
 double root1= (-b+pow(discriminant,0.5))/2*a;
 double root2= (-b-pow(discriminant,0.5))/2*a;
 printf( "root1 of the equation is: %ld,",root1);
 printf( "root of the equation is: %ld,",root2);
    return 0;
}
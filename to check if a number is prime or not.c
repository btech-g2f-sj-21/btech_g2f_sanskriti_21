#include <stdio.h>

int main() {
    int n,i,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {if(n%i==0)
        {c=c+1;};
        i++;
    } if(c>2)
    printf("\n %d is not prime",n);
    else
    printf("\n %d is prime",n);
     return 0;
}
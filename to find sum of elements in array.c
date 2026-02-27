#include<stdio.h>
//to find the sum of an element of an array
int main () {
    int n=10,a[10],i,s=0;
    printf("enter the 10 elements: ");
    
    for (i=0;i<n;i++)
    {scanf("%d",&a[i]);
    s=s+a[i]; }
    printf("sum of array elements=%d",s);
    return 0;
}
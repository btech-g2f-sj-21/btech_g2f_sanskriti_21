#include <stdio.h>

int main() {
    int age;
  printf("enter the age:");
  scanf("%d",&age);
  if(age>=18) 
  printf("\n Eligible for voting");
 else 
  printf("\n Not eligible for voting");
  return 0;

}
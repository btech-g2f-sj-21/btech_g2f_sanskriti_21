#include <stdio.h>

int main() {
    int age;
  printf("enter the age:");
  scanf("%d",&age);
  if(age>=0&&age<12) 
  printf("\n CHILD ");
 else if (age>=12&&age<18)
  printf("\n TEENAGER");
  else if (age>=18&&age<60)
  printf(" ADULT");
  else 
  printf(" SENIOR CITIZEN");
  return 0;

}
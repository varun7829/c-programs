/*swapping values without using third variable*/

#include<stdio.h>
int main()

{
  int a,b;

  a = 80;
  b = 70;

  printf("Before swapping a : %d  b : %d",a,b);

  a = a+b;
  b = a-b;
  a = a-b;

  printf("\nAfter swapping a : %d b : %d",a,b);

  return 0;
} 
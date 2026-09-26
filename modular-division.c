/*calculate modular division using c program*/

#include<stdio.h>
int main()

{
  int a,b,result;
  printf("MODULAR DIVISION CALCULATOR\n");
  printf("enter value of a : ");
  scanf("%d",&a);
  printf("enter value of b : ");
  scanf("%d",&b);

  result = a % b;
  printf("%d %% %d = %d",a,b,result);

  return 0;
}






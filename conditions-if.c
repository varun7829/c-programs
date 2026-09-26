/*condiotions to demonstrsate in if using c program*/

#include<stdio.h>
int main()
{
  int i,j ;
  printf("enter i value : ");
  scanf("%d",&i);
  printf("enter j value : ");
  scanf("%d",&j);

  if(i<10 && j>5 || i == +
    50 && j == 20 )
  {
    printf("condition is true");
  }
  else
  {
    printf("condition is false");
  }
   return 0;
}
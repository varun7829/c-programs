/*c program using floor() ceil() round() functions*/

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()

{
  float number,f,c,r;
  printf("Enter a Number :");
  scanf("%f",&number);

  f = floor(number);
  c = ceil(number);
  r = round(number);

  printf("floor : %f",f);
  printf("\nceil : %f",c);
  printf("\nround : %f",r);
  getch();
  
 
  return 0;
}
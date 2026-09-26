/*write a program to print Decimal numbers , Octal numbers and HexaDecimal numbers*/

#include<stdio.h>
int main()

{
   int dec,oct,hexa;
   printf("enter a  number in decimal format :");
   scanf("%i",&dec);
   printf("enter a  number in hexa decimal format :");
   scanf("%i",&hexa);
   printf("enter a number in octa decimal format :");
   scanf("%i",&oct);

   printf("\ndecimal number = %i",dec);
   printf("\nhexa decimal number = %i",hexa);
   printf("\nocta decimal number = %o",oct);

   return 0;
}
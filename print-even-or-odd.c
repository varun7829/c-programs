/*determine the number which is even or odd using c program*/

#include<stdio.h>
int main()

{
   int n;
   printf("EVEN OR ODD CALCULATOR\n ");
   printf("Enter a Number : ");
   scanf("%d",&n);
   if(n % 2 == 0)
   {
     printf("It is Even Number");
   }
   else
   {
    printf("it is odd number");
   }
   return 0;
}
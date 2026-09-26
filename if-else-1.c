/*Showing pin correct or incorrect using c */

#include<stdio.h>
int main()

{
   int pin;
   printf("Enter your 4 digit pin : ");
   scanf("%d",&pin);

   if(pin == 78)
   {
       printf("Your Pin Is Correct");
       printf("\nYou Are welcome");
   }
   
   else
   {
       printf("Your Pin Is InCorrect");
       printf("\nplease Try Again");
   }

   return 0;
}
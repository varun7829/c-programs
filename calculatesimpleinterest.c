#include<stdio.h>
#include<math.h>
int main()

{
   float p,t,r,CI,Amount;
   printf("Enter Principle Amount :");
   scanf("%f",&p);
   printf("Enter Time period :");
   scanf("%f",&t);
   printf("Enter rate of interest :");
   scanf("%f",&r);

   Amount = p * pow((1 + r / 100),t);
   CI = Amount - p;

   printf("compound interest = %.0f",CI);
   printf("\nTotal amount = %.0f",Amount);

   return 0;
}
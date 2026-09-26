/*code for entering two decimals in var(scan f)*/

#include<stdio.h>
 int main()
 {
   double a,b;
   printf("enter two decimal numbers :");
   scanf("%lf%lf",&a,&b);
   printf("a=%.8lf\nb=%.8lf",a,b);
   return 0;
 }
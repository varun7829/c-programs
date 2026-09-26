/*print even numbers upto n using c program*/

#include<stdio.h>
int main()
{
   int i = 1, n;
   printf("Enter a number :");
   scanf("%d",&n);
   while(i <= n)
    { 
        if(i % 2 == 0)
        {
        printf("%d ",i);
        }
        i++;
    }

     return 0;
}


/*Find Rating using Switch Statements Using C program*/

#include<stdio.h>
int main()
{
    int rating;
    printf("Enter rating : ");
    scanf("%d",&rating);

    switch(rating)        //executes statements step by step  
    {
        
         case 1 : printf("worst");
                 break;
         case 2 : printf("bad");
                 break;
         case 3 : printf("average");
                 break;
         case 4 : printf("good");
                 break;
         case 5 : printf("excellent");
                 break;
        default : printf("invalid rating");
                 break;
      
    }

    return 0;
}
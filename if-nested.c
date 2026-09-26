 /*Write a c program to order food from customer in restaurent*/

#include<stdio.h>
int main()

{

     int category,item;
     printf("press 1 for tiffin\n");
     printf("press 2 for fast food\n");

     printf("Enter category No : ");
     scanf("%d",&category);

     if(category == 1)
     {
          printf("press 1 for idli\n");
          printf("press 2 for dosa\n");
          printf("press 3 for puri\n");

          printf("Enter Item No : ");
          scanf("%d",&item);

          if(item == 1)
          {
             printf("you ordered idli");
          }
          else if(item == 2)
          {
             printf("you ordered dosa");
          }
         else if (item == 3)
         {
             printf("you ordered puri");
         }
         else
         { 
             printf("invalid oder");
         }
     }

     else if(category == 2)
     {
         printf("press 1 for noodles\n");
         printf("press 2 for gobi rice\n");
         printf("press 3 for chicken rice\n");

         printf("Enter Item No : ");
         scanf("%d",&item);

         if(item == 1)
         {
           printf("you ordered noodles");
         }
         else if(item == 2)
         {
           printf("you ordered gobi rice");
         }
         else if(item == 3)
         {
           printf("you ordered chicken rice");
         }
         else
         {
           printf("invalid order");
         }
    
         printf("\nthank u visit again :)");
     }
     return 0;
}

 
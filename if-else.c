/*c program for print output using if/else functions*/
/*print major or minor using if/else conditions*/
#include<stdio.h>
int main()
 {
    int age;

     printf("Enter Your Age : ",age);
     scanf("%d",&age);

    if(age>=18)
    {
      printf("You are a Major");
    }
    else
    {
      printf("You are a Minor");
    }
    
    return 0;

 }
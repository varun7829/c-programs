/*finding grades of marks b/w 0 to 100 by using c program */

#include<stdio.h>
int main()
{
    int marks;
    printf("Enter marks : ");
    scanf("%d",&marks);
    if(marks >= 90 && marks <= 100)

    {
        printf("A grade");
        printf("\ncandidate has passed in first class");
    }
    else if(marks >= 80 && marks <= 90)
    {
        printf("B grade");
        printf("\ncandidate has passed in first class");
    }
    else if(marks >= 70 && marks <= 80)
    { 
        printf("C grade");
        printf("\ncandidate has passed in second class");
    }
    else if(marks >= 60 && marks <= 70)
    {
        printf("D grade");
        printf("\ncandidate has passed in third class");
    }
    else if(marks >= 50 && marks <= 60)
    {
        printf(" E grade");
        printf("\ncandidate has passed in fourth class");
    }
    else if(marks >= 40 && marks <= 50)
    {
    
        printf("\ncandidate has just passed ");
    }
    else if(marks >= 35 && marks <= 40)
    {
        printf(" G grade");
        printf("\ncandidate has just passed ");
    }
    else if(marks >= 0 && marks <= 34)
    {
        printf("candidate has failed");
        printf("\nbetter luck next time :)");
    }
    
     else
      {
        printf("marks should be entered from 0 to 100");
        printf("\nplease re enter again");
      }
      return 0;
}
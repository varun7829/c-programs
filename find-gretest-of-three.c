/*write a cprogram to find greatest number of three*/

#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Value of a : ");
    scanf("%d",&a);
    printf("Enter Value of b : ");
    scanf("%d",&b);
    printf("Enter Value of c : ");
    scanf("%d",&c);
    if(a > b && a > c)
    {
        printf("a is greater");
    }
    else if(b > c)
    {
        printf("b is greater");
    }
    else 
    {
        printf("c is greater");
    }
    return 0;
}